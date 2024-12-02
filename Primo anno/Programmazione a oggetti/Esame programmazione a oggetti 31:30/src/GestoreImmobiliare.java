import java.util.*;
import java.io.*;
import java.text.*;

public class GestoreImmobiliare {
	private static List<Brochure> brochure = new ArrayList<Brochure>();

	private static List<Inserzione> inserzioni = new ArrayList<Inserzione>();
	private static List<Agente> agenti = new ArrayList<Agente>();
	private static Date data = new Date();
	

	public GestoreImmobiliare() {
	}
	
	public void leggiDaFile() {
		/// Leggi la lista degli agenti da file
		leggiAgenti();
		
		// Leggi la lista delle inserzioni
		leggiInserzioni();
		
		// Leggi la lista di fotografie
		leggiFotografie();
		
		// Leggi la lista di commenti
		leggiCommenti();
		
	}
	
	private void leggiAgenti() {
		try {
			Scanner scanner = new Scanner(new File("agenti.txt"));
			
			while(scanner.hasNextLine()) {
				final String riga = scanner.nextLine();
				final String[] parti = riga.split(",");
				
				Agente agente;
				
				switch (parti[1]) {
				case "gold": {
					agente = new AgenteGold(parti[0]);
					break;
				}
				case "premium": {
					agente = new AgentePremium(parti[0]);
					break;
				}
				case "standard": {
					agente = new AgenteStandard(parti[0]);
					break;
				}
				default:
					throw new IllegalArgumentException("Unexpected value: " + parti[1]);
				}
				
				agenti.add(agente);
			}
			
			scanner.close();
		} catch (FileNotFoundException e) {
			System.out.println("Errore nella lettura del file 'agenti.txt': file non trovato");
			e.printStackTrace();
		} catch (IllegalArgumentException e) {
			System.out.println("Errore nella lettura del file 'inserzione.txt': tipo di utente errato");
		}
	}

	private void leggiInserzioni() {
		try {
			Scanner scanner = new Scanner(new File("inserzione.txt"));
			
			while(scanner.hasNextLine()) {
				final String riga = scanner.nextLine();
				final String[] parti = riga.split(",");
				
				Inserzione inserzione;
				
				if(parti[3].equals("null")) {
					inserzione = new Inserzione(Integer.parseInt(parti[0]), parti[1], parti[2], parti[5].equals("true") ? true : false, parti[4]);
				} else {
					SimpleDateFormat format = new SimpleDateFormat("YYYY/mm/dd");
					Date data = format.parse(parti[3]);
					inserzione = new InserzioneConScadenza(Integer.parseInt(parti[0]), parti[1], parti[2], data, parti[5].equals("true") ? true : false, parti[4]);
				}
				
				
				inserzioni.add(inserzione);
			}
			
			scanner.close();
		} catch (FileNotFoundException | ParseException e) {
			System.out.println("Errore nella lettura del file 'inserzione.txt':" + (e instanceof FileNotFoundException ? "file non trovato" : "data sbagliata" + e.getMessage()));
		}
	}
	
	private void leggiFotografie() {
		try {
			Scanner scanner = new Scanner(new File("fotografie.txt"));
			
			while(scanner.hasNextLine()) {
				final String riga = scanner.nextLine();
				final String[] parti = riga.split(",");
				
				Fotografia fotografia = new Fotografia(parti[0], Integer.parseInt(parti[1]));
				
				for (final Inserzione inserzione: inserzioni) {
					if(inserzione.getId() == Integer.parseInt(parti[2])) {
						inserzione.aggiungiFotografia(fotografia);
					}
				}
			}
			
			scanner.close();
		} catch (FileNotFoundException e) {
			System.out.println("Errore nella lettura del file 'inserzione.txt': file non trovato");
		}
	}
	
	private void leggiCommenti() {
		try {
			Scanner scanner = new Scanner(new File("commenti.txt"));
			
			while(scanner.hasNextLine()) {
				final String riga = scanner.nextLine();
				final String[] parti = riga.split(",");
				
				Fotografia fotografia = cercaFotografia(parti[0]);
				
				if (fotografia != null) {
					fotografia.aggiungiCommento(parti[2]);
					Agente agente = cercaAgente(parti[1]);
					if (agente != null) {
						agente.togliCommento();
					}
				}
				
			}
			
			scanner.close();
		} catch (FileNotFoundException e) {
			System.out.println("Errore nella lettura del file 'inserzione.txt': file non trovato");
		}
	}
	
	private Fotografia cercaFotografia(String id) {
		for (Inserzione inserzione: inserzioni) {
			Fotografia fotografia = inserzione.cercaFotografia(id);
			if(fotografia != null) return fotografia;
		}
		
		return null;
	}
	
	private Agente cercaAgente(String nome) {
		for (Agente agente: agenti) {
			if (agente.getNome().equals(nome)) return agente;
		}
		
		return null;
	}
	
	public Inserzione cercaInserzione(long idInserzione) {
		for (Inserzione inserzione: inserzioni) {
			if(inserzione.getId() == idInserzione) return inserzione;
		}
		
		return null;
	}
	
	public static Brochure cercaBrochure(String idBrochure) {
		for (Brochure brochure: brochure) {
			if(brochure.getId().equals(idBrochure)) return brochure;
		}
		
		return null;
	}
	
	public void aggiungiFotografia(String nome, int dimensione, long inserzione) {
		Fotografia foto = new Fotografia(nome, dimensione);
		
		for(final Inserzione inser: inserzioni) {
			if (inser.getId() == inserzione) {
				if(inser.cercaFotografia(nome) == null) {
					inser.aggiungiFotografia(foto);
				} else {
					System.out.println("Impossibile aggiungere la fotografia perché esiste già");
				}
			}
		}
	}
	
	public void aggiungiCommento(String idFoto, String agente, String commento, long idInserzione) {
		Agente age = cercaAgente(agente);

		if (age == null) {
			System.out.println("Impossibile aggiungere il commento perché l'agente non esiste");
			return;
		}
		
		if (age.getNumeroCommenti() == 0) {
			System.out.println("Impossibile aggiungere il commento perché l'agente li ha già usati tutti");
			return;
		}
		

		for(final Inserzione inser: inserzioni) {
			if (inser.getId() == idInserzione) {
				Fotografia foto = inser.cercaFotografia(idFoto);
				if(foto == null) {
					System.out.println("Impossibile aggiungere in commento perché la fotografia non esiste");
				} else {
					if (age instanceof AgenteStandard) {
						System.out.println("Gli utenti standard non possomo commentare");
						return;
					}
					
					boolean gold = age instanceof AgenteGold;
					
					foto.aggiungiCommento(gold ? "!!!" : "" + commento + (gold ? "!!!" : ""));
				}
			}
		}
	}
	
	public void aggiungiInserzione(long id, String idAgente, String titolo, String indirizzo, Date scadenza, boolean condivisa) {
		Inserzione nuovaInserzione;
		if (scadenza == null) {
			nuovaInserzione = new Inserzione(id, titolo, indirizzo, condivisa, idAgente);
		} else {
			nuovaInserzione = new InserzioneConScadenza(id, titolo, indirizzo, scadenza, condivisa, idAgente);
		}
		
		inserzioni.add(nuovaInserzione);
	}
	
	public Date getData() {
		return data;
	}
	
	public void setData(Date nuovaData) {
		data = nuovaData;
	}
	
	public static void creaBrochure(String id) throws IdGiaUsatoException {
		Brochure brochue = cercaBrochure(id);
		
		if(brochue != null) throw new IdGiaUsatoException();
		
		Brochure nuovaBrochure = new Brochure(id);
		
		for (Inserzione inserzione: inserzioni) {
			if(inserzione.isVisible() && !inserzione.scaduta(data)) {
				nuovaBrochure.aggiungiInserzione(inserzione);
			}
		}
		
		brochure.add(nuovaBrochure);
	}
	
	public void stampaStato() {
		String risultato = "";
		
		risultato += "STATO DEL GESTORE\n";
		
		for(Agente agente: agenti) {
			risultato += agente.toString() + "\n";
		}
		
		for(Inserzione inserzione: inserzioni) {
			risultato += inserzione.toString() + "\n";
		}
		
		
		
		System.out.println(risultato);
	}
	
	public void stampaGiornali() {
		String risultato = "Giornali:\n\n";
		
		for (Brochure brochure: brochure) {
			risultato += brochure.toString() + "\n";
		}
		
		System.out.println(risultato);
	}
}

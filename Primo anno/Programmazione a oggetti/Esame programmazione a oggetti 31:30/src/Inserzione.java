/**
 * 
 */

import java.util.*;

/**
 * 
 */
public class Inserzione {
	private long id;
	private String titolo;
	private String indirizzo;
	private boolean visibile;
	private String creatore;
	private List<Fotografia> fotografie;
	
	Inserzione(long id, String titolo, String indirizzo, boolean visibile, String creatore) {
		this.id = id;
		this.titolo = titolo;
		this.indirizzo = indirizzo;
		this.fotografie = new ArrayList<Fotografia>();
		this.visibile = visibile;
		this.creatore = creatore;
	}
	
	public void aggiungiFotografia(Fotografia fotografia) {
		fotografie.add(fotografia);
	}

	/**
	 * @return the id
	 */
	public long getId() {
		return id;
	}
	
	public Fotografia cercaFotografia(String id) {
		for (final Fotografia fotografia: fotografie) {
			if(fotografia.getId().equals(id)) return fotografia;
		}
		
		return null;
	}
	
	public boolean isVisible() {
		return visibile;
	}
	
	public boolean scaduta(Date data) {
		return false;
	}
	
	@Override
	public String toString() {
		String risultato = "Inserzione " + id + ":\n";
		risultato += "\ttitolo: " + titolo + "\n";
		risultato += "\tindirizzo: " + indirizzo + "\n";
		risultato += "\tcreata da: " + creatore + "\n";
		risultato += "\tè condivisa: " + visibile + "\n";
		
		for (Fotografia fotografia: fotografie) {
			risultato += "\t" + fotografia.toString() + "\n";
		}
		
		
		
		return risultato;
	}
}

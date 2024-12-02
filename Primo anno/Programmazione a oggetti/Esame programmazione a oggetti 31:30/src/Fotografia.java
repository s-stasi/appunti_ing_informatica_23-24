/**
 * 
 */

import java.util.*;

/**
 * 
 */
public class Fotografia {
	private String id;
	private int dimensione;
	private List<String> commenti;
	
	Fotografia(String id, int dimensione) {
		this.id = id;
		this.dimensione = dimensione;
		this.commenti = new ArrayList<String>();
	}

	public String getId() {
		return id;
	}
	
	public void aggiungiCommento(String commento) {
		commenti.add(commento);
	}
	
	@Override
	public String toString() {
		String risultato = "Fotografia " + id + " con dimensione " + dimensione + ":\n";
		
		for (String commento: commenti) {
			risultato += "\t" + commento + "\n";
		}
		
		return risultato;
	}
}

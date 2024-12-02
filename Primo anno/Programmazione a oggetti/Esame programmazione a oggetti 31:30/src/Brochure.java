import java.util.*;

public class Brochure {
	private String id;
	private List<Inserzione> inserzioni;
	

	public Brochure(String id) {
		this.inserzioni = new ArrayList<Inserzione>();
		this.id = id;
	}
	
	public void aggiungiInserzione(Inserzione inserzione) {
		inserzioni.add(inserzione);
	}

	public String getId() {
		return id;
	}
	
	@Override
	public String toString() {
		String risultato = "Brochure " + id + "\n";
		
		for (Inserzione inserzione: inserzioni) {
			risultato += "\t" + inserzione.toString() + "\n";
		}
		
		return risultato;
	}
}

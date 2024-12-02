import java.util.*;

public class InserzioneConScadenza extends Inserzione {
	private Date scadenza;

	public InserzioneConScadenza(long id, String titolo, String indirizzo, Date scadenza, boolean visibile, String creatore) {
		super(id, titolo, indirizzo, visibile, creatore);
		this.scadenza = scadenza;
	}
	
	@Override
	public boolean scaduta(Date data) {
		return scadenza.before(data);
	}
}

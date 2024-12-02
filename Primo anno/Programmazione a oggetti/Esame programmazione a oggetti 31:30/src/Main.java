import java.util.Date;

public class Main {
	public static void main(String[] args) {
		GestoreImmobiliare gestore = new GestoreImmobiliare();
		
		gestore.leggiDaFile();
		
		gestore.stampaStato();

		try {
			GestoreImmobiliare.creaBrochure("jksdhfsjhdfskf");
		} catch (IdGiaUsatoException e) {
			// TODO Auto-generated catch block
			System.out.println(e.getMessage());
		}
		
		gestore.setData(new Date(2040,1,1));
		

		try {
			GestoreImmobiliare.creaBrochure("2");
		} catch (IdGiaUsatoException e) {
			// TODO Auto-generated catch block
			System.out.println(e.getMessage());
		}
		try {
			GestoreImmobiliare.creaBrochure("2");
		} catch (IdGiaUsatoException e) {
			// TODO Auto-generated catch block
			System.out.println(e.getMessage());
		}
		
		gestore.stampaGiornali();
	}
}

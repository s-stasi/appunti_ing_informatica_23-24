/**
 * 
 */

/**
 * 
 */
public abstract class Agente {
	protected int numeroCommenti;
	private String nome;
	
	Agente(int numeroCommenti, String nome) {
		this.numeroCommenti = numeroCommenti;
		this.nome = nome;
	}

	/**
	 * @return the nome
	 */
	public String getNome() {
		return nome;
	}
	
	public int getNumeroCommenti() {
		return numeroCommenti;
	}
	
	public void togliCommento() {
		numeroCommenti --;
	}
	
	@Override
	public String toString() {
		return "Agente " + nome + ", ha ancora la possibilità di fare " + numeroCommenti + " commenti";
	}
}

import javax.swing.JOptionPane;

public class JogoDoAdivinha2 {
	public static void main(String args[]) {
		Adivinha jogo = new Adivinha();
		for (;;) {
			String entrada = JOptionPane.showInputDialog("Digite um n�mero: ");
			int x = Integer.parseInt(entrada);
			jogo.setNum(x);
			jogo.adivinha();
		}
	}
}

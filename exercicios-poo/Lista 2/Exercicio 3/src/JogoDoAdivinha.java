import javax.swing.JOptionPane;
import java.util.Random;

public class JogoDoAdivinha {
	public static void main(String args[]) {
		Random random = new Random();
		for (;;) {
			int x;
			int numero = random.nextInt(10);
			x = numero;
			String entrada = JOptionPane.showInputDialog("Digite um n�mero: ");
			int n = Integer.parseInt(entrada);
			if (n == x) {
				JOptionPane.showMessageDialog(null, "Voc� acertou!");
			} else {
				JOptionPane.showMessageDialog(null, "Voc� errou! \nO n�mero �: " + x);
			}

		}
	}
}

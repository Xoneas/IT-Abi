import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.event.*;


public class KontoGUI extends JFrame {
  // Anfang Attribute
  private JLabel aktuellLabel = new JLabel();
  private JLabel einLabel = new JLabel();
  private JLabel ausLabel = new JLabel();
  private JLabel mitteilungLabel = new JLabel();
  private JTextField aktuellField = new JTextField();
  private JTextField einField = new JTextField();
  private JTextField ausField = new JTextField();
  private JButton button1 = new JButton();
  private JButton button2 = new JButton();
  private Girokonto gk;
  private JTextField mitteilungField = new JTextField();
  private int test = 0;
  // Ende Attribute
  
  public KontoGUI() { 
    // Frame-Initialisierung
    super();
    setDefaultCloseOperation(WindowConstants.DISPOSE_ON_CLOSE);
    int frameWidth = 434; 
    int frameHeight = 573;
    setSize(frameWidth, frameHeight);
    Dimension d = Toolkit.getDefaultToolkit().getScreenSize();
    int x = (d.width - getSize().width) / 2;
    int y = (d.height - getSize().height) / 2;
    setLocation(x, y);
    setTitle("KontoGUI");
    setResizable(false);
    Container cp = getContentPane();
    cp.setLayout(null);
    // Anfang Komponenten
    
    aktuellLabel.setBounds(0, 0, 179, 41);
    aktuellLabel.setText("Aktueller Kontostand in Euro: ");
    aktuellLabel.setFont(new Font("Dialog", Font.BOLD, 12));
    cp.add(aktuellLabel);
    einLabel.setBounds(0, 48, 177, 41);
    einLabel.setText("Einzahlen in Euro: ");
    cp.add(einLabel);
    ausLabel.setBounds(0, 96, 177, 41);
    ausLabel.setText("Auszahlen in Euro");
    cp.add(ausLabel);
    mitteilungLabel.setBounds(72, 152, 129, 41);
    mitteilungLabel.setText("Aktuelle Mitteilung:");
    cp.add(mitteilungLabel);
    aktuellField.setBounds(184, 8, 81, 33);
    aktuellField.setEditable(false);
    cp.add(aktuellField);
    einField.setBounds(184, 56, 81, 33);
    cp.add(einField);
    ausField.setBounds(184, 104, 81, 33);
    cp.add(ausField);
    button1.setBounds(272, 56, 73, 33);
    button1.setText("Bestätigen");
    button1.setMargin(new Insets(2, 2, 2, 2));
    button1.addActionListener(new ActionListener() { 
      public void actionPerformed(ActionEvent evt) { 
        button1_ActionPerformed(evt);
      }
    });
    cp.add(button1);
    button2.setBounds(272, 104, 73, 33);
    button2.setText("Bestätigen");
    button2.setMargin(new Insets(2, 2, 2, 2));
    button2.addActionListener(new ActionListener() { 
      public void actionPerformed(ActionEvent evt) { 
        button2_ActionPerformed(evt);
      }
    });
    cp.add(button2);
    mitteilungField.setBounds(0, 200, 273, 25);
    mitteilungField.setEditable(false);
    cp.add(mitteilungField);
    // Ende Komponenten
    
    setVisible(true);
  } // end of public KontoGUI
  
  // Anfang Methoden
  
  public static void main(String[] args) {
    new KontoGUI();
  } 
  
  public void button1_ActionPerformed(ActionEvent evt) {
    gk = new Girokonto("Max Müller","1234",-800);
    double betrag = Double.parseDouble(einField.getText());
    setAnzeige(betrag, "einzahlen");
    gk.einzahlen(betrag);
    double stand = gk.getKontostand();
    aktuellField.setText(String.valueOf(stand));
    einField.setText(String.valueOf(test));
  } 

  public void button2_ActionPerformed(ActionEvent evt) {
    gk = new Girokonto("Max Müller","1234",-800);
    double betrag = Double.parseDouble(ausField.getText());
    setAnzeige(betrag, "auszahlen");
    gk.auszahlen(betrag);
    double stand = gk.getKontostand();
    aktuellField.setText(String.valueOf(stand));
  }
  
  public void setAnzeige(double betrag, String wahl){
  if(betrag < 0){
    mitteilungField.setText("Betrag größer Null eingeben!");
    }
  else if (wahl == "einzahlen"){
   mitteilungField.setText(betrag + " Euro eingezahlt");  
  }
  else{
   mitteilungField.setText(betrag + " Euro ausgezahlt"); 
   }
 }
  

  // Ende Methoden
} 

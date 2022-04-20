import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.event.*;
import java.text.DecimalFormat;
/**
 *
 * Beschreibung
 *
 * @version 1.0 vom 10.03.2022
 * @author 
 */

public class InternetCafeGUI extends JFrame {
  // Anfang Attribute
  private JLabel anfangsLabel = new JLabel();
  private JTextArea jTextArea1 = new JTextArea("");
    private JScrollPane jTextArea1ScrollPane = new JScrollPane(jTextArea1);
  private JTextArea jTextArea2 = new JTextArea("");
    private JScrollPane jTextArea2ScrollPane = new JScrollPane(jTextArea2);
  private JButton bRechnung = new JButton();
  private JButton bMineralwasser = new JButton();
  private JButton bKaffeeTee = new JButton();
  private JTextField KaffeeTeeField = new JTextField();
  private JTextField wasserField = new JTextField();
  private JTextField betragField = new JTextField();
  double gesamt = 0;
  int kaffee= 0;
  int wasser =0;
  private DecimalFormat df = new DecimalFormat("0.##");
  private JLabel jLabel1 = new JLabel();
  // Ende Attribute
  
  public InternetCafeGUI() { 
    // Frame-Initialisierung
    super();
    setDefaultCloseOperation(WindowConstants.DISPOSE_ON_CLOSE);
    int frameWidth = 529; 
    int frameHeight = 575;
    setSize(frameWidth, frameHeight);
    Dimension d = Toolkit.getDefaultToolkit().getScreenSize();
    int x = (d.width - getSize().width) / 2;
    int y = (d.height - getSize().height) / 2;
    setLocation(x, y);
    setTitle("InternetCafeGUI");
    setResizable(false);
    Container cp = getContentPane();
    cp.setLayout(null);
    // Anfang Komponenten
    
    anfangsLabel.setBounds(0, 8, 705, 65);
    anfangsLabel.setText("Willkommen im Internetcafe WahnSinn!");
    anfangsLabel.setBackground(Color.YELLOW);
    anfangsLabel.setOpaque(true);
    anfangsLabel.setFont(new Font("Arial", Font.BOLD, 22));
    cp.add(anfangsLabel);
    jTextArea1ScrollPane.setBounds(0, 72, 513, 121);
    jTextArea1.setText("Wir haben für Sie Kaffee, Tee und Mineralwasser \nbereitgestellt. Bedienen Sie sich bitte! \nIhren Unkostenbeitrag können Sie sich hier errechnen lassen. \nKlicken Sie auf die entsprechenden Wahltaste!");
    jTextArea1.setFont(new Font("Dialog", Font.BOLD, 14));
    cp.add(jTextArea1ScrollPane);
    jTextArea2ScrollPane.setBounds(144, 392, 265, 137);
    jTextArea2.setText("Rechnung:\n\nGetrunkene Kaffee/Tee:\n\nGetrunkene Mineralwasser:\n\nZu zahlender Betrag:");
    jTextArea2.setFont(new Font("Dialog", Font.BOLD, 14));
    cp.add(jTextArea2ScrollPane);
    bRechnung.setBounds(0, 320, 513, 57);
    bRechnung.setText("Rechnung");
    bRechnung.setMargin(new Insets(2, 2, 2, 2));
    bRechnung.addActionListener(new ActionListener() { 
      public void actionPerformed(ActionEvent evt) { 
        bRechnung_ActionPerformed(evt);
      }
    });
    bRechnung.setFont(new Font("Dialog", Font.BOLD, 18));
    bRechnung.setBackground(Color.YELLOW);
    cp.add(bRechnung);
    bMineralwasser.setBounds(0, 256, 513, 57);
    bMineralwasser.setText("Mineralwasser");
    bMineralwasser.setMargin(new Insets(2, 2, 2, 2));
    bMineralwasser.addActionListener(new ActionListener() { 
      public void actionPerformed(ActionEvent evt) { 
        bMineralwasser_ActionPerformed(evt);
      }
    });
    bMineralwasser.setBackground(Color.YELLOW);
    bMineralwasser.setFont(new Font("Dialog", Font.BOLD, 18));
    cp.add(bMineralwasser);
    bKaffeeTee.setBounds(0, 200, 513, 49);
    bKaffeeTee.setText("Kaffee/Tee");
    bKaffeeTee.setMargin(new Insets(2, 2, 2, 2));
    bKaffeeTee.addActionListener(new ActionListener() { 
      public void actionPerformed(ActionEvent evt) { 
        bKaffeeTee_ActionPerformed(evt);
      }
    });
    bKaffeeTee.setBackground(Color.YELLOW);
    bKaffeeTee.setFont(new Font("Dialog", Font.BOLD, 18));
    cp.add(bKaffeeTee);
    KaffeeTeeField.setBounds(360, 424, 33, 17);
    cp.add(KaffeeTeeField);
    wasserField.setBounds(360, 464, 33, 17);
    cp.add(wasserField);
    betragField.setBounds(360, 496, 33, 17);
    cp.add(betragField);
    jLabel1.setBounds(0, 384, 513, 153);
    jLabel1.setText("");
    jLabel1.setForeground(Color.BLACK);
    jLabel1.setFont(new Font("Dialog", Font.BOLD, 12));
    jLabel1.setBackground(Color.BLACK);
    jLabel1.setOpaque(true);
    cp.add(jLabel1);
    // Ende Komponenten
    
    setVisible(true);
  } // end of public InternetCafeGUI
  
  // Anfang Methoden

  public static void main(String[] args) {
    new InternetCafeGUI();
  } // end of main
  
  public void bRechnung_ActionPerformed(ActionEvent evt) {
    KaffeeTeeField.setText(String.valueOf(kaffee));
    wasserField.setText(String.valueOf(wasser));
    betragField.setText(df.format(gesamt));
  } 

  public void bMineralwasser_ActionPerformed(ActionEvent evt) {
    gesamt+= 2;
    wasser++;
    
  } 

  public void bKaffeeTee_ActionPerformed(ActionEvent evt) {
    gesamt+=1.5;
    kaffee++;
    
  } 

  // Ende Methoden
} // end of class InternetCafeGUI

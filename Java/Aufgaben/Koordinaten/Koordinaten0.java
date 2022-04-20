import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.event.*;



public class Koordinaten0 extends JFrame {
  // Anfang Attribute
  private JTextField xKreisField = new JTextField();
  private JButton BerechnungsButton = new JButton();
  private JLabel xKreisLabel = new JLabel();
  private JLabel yKreisLabel = new JLabel();
  private JLabel RadiusLabel = new JLabel();
  private JLabel xPunktLabel = new JLabel();
  private JTextField yKreisField = new JTextField();
  private JTextField radiusField = new JTextField();
  private JTextField xPunktField = new JTextField();
  private JLabel yPunktLabel = new JLabel();
  private JLabel abstandsLabel = new JLabel();
  private JLabel imKreisLabel = new JLabel();
  private JTextField abstandsField = new JTextField();
  private JTextField trueField = new JTextField();
  private JTextField yPunktField = new JTextField();
  private Kreis k;
  private Punkt p;
  // Ende Attribute

  public Koordinaten0() { 
    // Frame-Initialisierung
    super();
    setDefaultCloseOperation(WindowConstants.DISPOSE_ON_CLOSE);
    int frameWidth = 513; 
    int frameHeight = 709;
    setSize(frameWidth, frameHeight);
    Dimension d = Toolkit.getDefaultToolkit().getScreenSize();
    int x = (d.width - getSize().width) / 2;                //18-21 legt fest wo das Fenster erscheint
    int y = (d.height - getSize().height) / 2;
    setLocation(x, y);
    setTitle("Koordinaten0");
    setResizable(false);           //wenn true dann kann man die Größe ändern aber wäre zu kompliziert
    Container cp = getContentPane();
    cp.setLayout(null);            //layout ist kompliziert,lassen wir weg
    // Anfang Komponenten
    
    xKreisLabel.setBounds(0, 16, 179, 49);
    xKreisLabel.setText("x-Koordinate Mittelpunkt Kreis:");
    xKreisField.setBounds(192, 24, 73, 25);
    cp.add(xKreisField);
    BerechnungsButton.setBounds(160, 368, 137, 49);
    BerechnungsButton.setText("Berechnung starten");
    BerechnungsButton.setMargin(new Insets(2, 2, 2, 2));
    BerechnungsButton.addActionListener(new ActionListener() { 
      public void actionPerformed(ActionEvent evt) { 
        BerechnungsButton_ActionPerformed(evt);
      }
    });
    cp.add(BerechnungsButton);
    yKreisLabel.setBounds(8, 80, 178, 41);
    yKreisLabel.setText("y-Koordinate Mittelpunkt Kreis:");
    cp.add(yKreisLabel);
    RadiusLabel.setBounds(0, 152, 169, 49);
    RadiusLabel.setText("Radius des Kreises:");
    cp.add(RadiusLabel);
    xPunktLabel.setBounds(0, 224, 177, 41);
    xPunktLabel.setText("x-Koordinate vom Punkt: ");
    cp.add(xPunktLabel);
    yKreisField.setBounds(200, 96, 81, 33);
    cp.add(yKreisField);
    radiusField.setBounds(200, 168, 89, 41);
    cp.add(radiusField);
    xPunktField.setBounds(208, 232, 81, 49);
    cp.add(xPunktField);
    yPunktLabel.setBounds(0, 296, 161, 49);
    yPunktLabel.setText("y-Koordinate vom Punkt");
    cp.add(yPunktLabel);
    abstandsLabel.setBounds(8, 440, 175, 49);
    abstandsLabel.setText("Abstand zum Kreismittelpunkt");
    cp.add(abstandsLabel);
    imKreisLabel.setBounds(0, 512, 185, 49);
    imKreisLabel.setText("Punkt liegt im Kreis");
    cp.add(imKreisLabel);
    abstandsField.setBounds(200, 448, 105, 49);
    cp.add(abstandsField);
    trueField.setBounds(200, 520, 113, 49);
    trueField.setEditable(false);
    cp.add(trueField);
    yPunktField.setBounds(200, 296, 89, 41);
    cp.add(yPunktField);
    // Ende Komponenten
    
    setVisible(true);
  } // end of public Koordinaten0
  
  // Anfang Methoden
  
  public static void main(String[] args) {
    new Koordinaten0();
  } // end of main
                      
  public void BerechnungsButton_ActionPerformed(ActionEvent evt) {
    double x = Double.parseDouble(xKreisField.getText());
    double y = Double.parseDouble(yKreisField.getText());
    double r = Double.parseDouble(radiusField.getText());
    k = new Kreis(x,y,r);
    double xp = Double.parseDouble(xPunktField.getText());
    double yp = Double.parseDouble(yPunktField.getText());
    p = new Punkt(xp,yp);
    boolean imKreisLabel = pointInCircle(k,p);
    trueField.setText(String.valueOf(imKreisLabel));
    
  } // end of BerechnungsButton_ActionPerformed
     private static boolean pointInCircle(Kreis k, Punkt p){
    double dx = p.getX()-k.getX();
    double dy = p.getY()-k.getY();
    double abstandQ= Math.pow(dx,2)+Math.pow(dy,2);
    double abstand = Math.sqrt(abstandQ);
    System.out.println("Der Abstand zum Mittelpunkt des Kreises beträgt: " + abstand);
    
    if(abstand <= k.getRadius()){
      System.out.println("Der Punkt befindet sich im Kreis");
      return true;
    }
    else{
      System.out.println("Der Punkt befindet sich nicht im Kreis");
      return false;
    }  
  }
  
  // Ende Methoden
} // end of class Koordinaten0

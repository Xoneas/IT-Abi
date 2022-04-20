 class Motorrad extends Fahrzeug {
  public static final int ANZAHL_RAEDER = 2;
  private int sitzPlaetze;
  public Motorrad(String b, double maxG, int sp) {
    super(b, maxG);  //schlüsselbefehl für die Werte die im Konstruktor stehen, Konstruktor wird nicht vererbt
    sitzPlaetze = sp;
  }
  public int getSitzPlaetze() {
    return sitzPlaetze;
  }
  public void ausgabe() {
    System.out.println("Der Besitzer: " + getBesitzer());
    System.out.println("Die max. Geschwindigkeit: " + getMaxGeschwindigkeit());
    System.out.println("Die Momentangeschwindigkeit: " + getMomentanGeschwindigkeit());
    System.out.println("Anzahl der Räder: " + ANZAHL_RAEDER);
    System.out.println("Anzahl der Sitze:" + sitzPlaetze);
  } 
}  

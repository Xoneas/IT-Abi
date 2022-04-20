public class PKWTest {
  // Anfang Attribute
  // Ende Attribute

  // Anfang Methoden
  public static void main(String args[]) {
    PKW einPKW = new PKW("Erwin Meier", 120, 5);
    System.out.println(PKW.ANZAHL_RAEDER);
    System.out.println(einPKW.getBesitzer());
    Motorrad m1 = new Motorrad("Klaus Wagner", 160, 2);
    m1.setMomentanGeschwindigkeit(80);
    m1.ausgabe();
    
    /*Fahrzeug f = new Fahrzeug("Fred Feuerstein", 60);
    f.ausgabe();
    f.setMomentanGeschwindigkeit(33);
    f.ausgabe();   */

  }
  // Ende Methoden
}

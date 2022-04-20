class Fahrzeug {
  private String besitzer;
  private double momentanGeschwindigkeit;
  private double maxGeschwindigkeit;
  public Fahrzeug(String b, double maxG) {
    besitzer = b;
    maxGeschwindigkeit = maxG;
    momentanGeschwindigkeit = 0;
  }
  // schreibende Methoden
  public void setBesitzer(String b) {
    besitzer = b;
  }
  public void setMomentanGeschwindigkeit(double momG) {
    momentanGeschwindigkeit = momG;
  }
  // lesende Methoden
  public String getBesitzer() {
    return besitzer;
  }
  public double getMomentanGeschwindigkeit() {
     return momentanGeschwindigkeit;
  }
  public double getMaxGeschwindigkeit() {
    return maxGeschwindigkeit;
  }
  public void ausgabe() {
    System.out.println("Der Besitzer: " + besitzer);
    System.out.println("Die max. Geschwindigkeit: " + maxGeschwindigkeit);
    System.out.println("Die Momentangeschwindigkeit: " + momentanGeschwindigkeit);
  }
}

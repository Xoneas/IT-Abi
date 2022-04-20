public abstract class Kraftrad extends Zweirad{
  private double leistung;
  public Kraftrad(String f, String b, double h, double l){
    super(f,b,h);
    leistung = l;
  }
  
  public double getLeistung(){
    return leistung;
  }
  
  public void setLeistung(double l){
    leistung=l;
  }
}

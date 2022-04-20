public abstract class Zweirad{
  private double maxG;
  private String besitzer;
  private String farbe;
  public Zweirad(String f, String b, double h){
      besitzer = b;
      farbe= f;
      maxG=h;
     }
  
  public String getFarbe(){
    return farbe;
  }
  
  public String getBesitzer(){
    return besitzer;
  }
  
  public double getHoechstgeschwindigkeit(){
    return maxG;
  }
  
  public void setBesitzer(String b){
    besitzer = b;
  }
  
  public void setFarbe(String f){
    farbe = f;
  }
  
  public void setHoechstgeschwindikeit(double h){
    maxG=h;
  }
}

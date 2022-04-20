class Zweitrad{
  double maxG;
  String besitzer;
  String farbe;
  public Zweitrad(String f, String b, double h){
      besitzer = b;
      farbe= f;
      maxG=h;
     }
  
  public String getFarbe(){
    return f;
  }
  
  public String getBesitzer(){
    return b;
  }
  
  public double getHoechstgeschwindigkeit(){
    return h;
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

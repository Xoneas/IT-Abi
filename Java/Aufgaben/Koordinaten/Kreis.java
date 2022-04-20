class Kreis extends Koordinaten{
  double radius;
  public Kreis(double x, double y, double r){
    super(x,y);
    radius = r;
  }
  
  public void setRadius(int r){
    radius = r;
    }
  
  public double getRadius(){
    return radius;
    }
}

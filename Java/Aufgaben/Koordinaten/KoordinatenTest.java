public class KoordinatenTest{
  public static void main (String args[]){
    
    Console eingabe = System.console();
    Kreis k = new Kreis(5,10,3);
    Punkt p = new Punkt(4,9);
    System.out.println(k.getX());
    System.out.println(k.getY());
    System.out.println(p.getX());
    System.out.println(p.getY());
    pointInCircle(k,p);
  }
  
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
}

public class ZweiradDemo{
  
  public static void main (String args[]){
    System.out.println("Fahrrad: ");
    Fahrrad klaus = new Fahrrad("grün","Klaus", 25);
    System.out.println(klaus.getFarbe());
    System.out.println(klaus.getBesitzer());
    System.out.println(klaus.getHoechstgeschwindigkeit());
    
    System.out.println("");
    System.out.println("Roller: ");
    Roller Mette = new Roller("blau","Mette-Marit", 80,10);
    System.out.println(Mette.getFarbe());
    System.out.println(Mette.getBesitzer());
    System.out.println(Mette.getHoechstgeschwindigkeit());
    System.out.println(Mette.getLeistung());
    
    System.out.println("");
    System.out.println("Motorrad: ");
    Motorrad Haakon = new Motorrad("rot","Haakon", 160, 40,1);
    System.out.println(Haakon.getFarbe());
    System.out.println(Haakon.getBesitzer());
    System.out.println(Haakon.getHoechstgeschwindigkeit());
    System.out.println(Haakon.getLeistung());
    System.out.println(Haakon.getAnzahlBeifahrer());
  }
}

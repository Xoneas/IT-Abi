import java.io.*;

public class Teiler{
  public static void main(String[] args){
    boolean nochmal = true;
    while (nochmal == true) { 
      
     
      System.out.print("Geben Sie Ihre Zahl ein: ");
      Console eingabe = System.console();
      int zahl = Integer.parseInt(eingabe.readLine());
      System.out.print("Ihre Zahl hat folgendene Teiler: ");
      for (int i= 1;i<=zahl ;i++ ) {
        int ergebnis= zahl%i;
        if(ergebnis == 0){
          System.out.print(i);
          if(i != zahl){
            System.out.print(", ");
          }
          }
        
      } // end of for
      
      System.out.println("");
      System.out.println("Nocheinmal? Ja = true, Nein = false");
      nochmal = Boolean.parseBoolean(eingabe.readLine());
    } 
    System.out.println("Programmende");
    System.out.println("");
    }
}
import java.io.*;

public class Teiler{
  public static void main(String[] args){
    boolean nochmal = true;
    while (nochmal == true) { 
      
     
      System.out.print("Geben Sie Ihre Zahl ein: ");
      Console eingabe = System.console();
      int zahl = Integer.parseInt(eingabe.readLine());
      System.out.print("Ihre Zahl hat folgendene Teiler: ");
      for (int i= 1;i<=zahl ;i++ ) {
        int ergebnis= zahl%i;
        if(ergebnis == 0){
          System.out.print(i);
          if(i != zahl){
            System.out.print(", ");
          }
          }
        
      } // end of for
      
      System.out.println("");
      System.out.println("Nocheinmal? Ja = true, Nein = false");
      nochmal = Boolean.parseBoolean(eingabe.readLine());
    } 
    System.out.println("Programmende");
    System.out.println("");
    }
}

import java.io.*;

public class Test {

public static void main(String args[]){
boolean nochmal = true;
while (nochmal == true) { 
Console eingabe = System.console();
System.out.println("Geben sie die erste Zahl ein ");
int Zahl1 = Integer.parseInt(eingabe.readLine());
System.out.println("Geben sie die 2. Zahl ein");
int Zahl2 = Integer.parseInt(eingabe.readLine());
int Ergebnis = Zahl1 - Zahl2;
System.out.println("Das Ergebnis ist "+ Ergebnis +"); 

}
System.out.println("Wollen sie das Programm wiederholen? Ja=true, Nein=false.")
nochmal = Boolean.parseBoolean(eingabe.readLine());
}



                   
                   
                   
                   
                   
                   
                   
                   
                   
                   
                   
                   
                   
                   import java.io.*;

public class Bremsen{
  
  public static void main(String args[]){
     boolean nochmal = true;
    while (nochmal == true) { 
      Console eingabe = System.console();
      System.out.println("Geben Sie Ihren maximalen Bremsweg ein: ");
      int bremsweg = Integer.parseInt(eingabe.readLine());
      double a = 4.3;
      double strecke = 0;
      double zeit =0;
      double aKMH = a*3.6;
      double bremswegKMH = bremsweg*3.6;
      double maxV = Math.sqrt(bremswegKMH * (2*aKMH));
      
      for (int i= 1;i<= (maxV/5) ;i++ ) {
        double v= 5*i;
        double vNeu= v/3.6;
        System.out.print("s: ");
        strecke = (vNeu*vNeu)/(2*a);
        double streckeR = Math.round(strecke*100.00)/100.00;
        System.out.print(streckeR);
        System.out.print("  ");
        System.out.print("t: ");
        zeit = vNeu/a;
        double zeitR = Math.round(zeit*100.00)/100.00;
        System.out.println(zeitR); 
      } // end of for
      
      System.out.println("Nochmal? Ja= true, Nein = false");
      nochmal = Boolean.parseBoolean(eingabe.readLine());
    } // end of while
    }
  }

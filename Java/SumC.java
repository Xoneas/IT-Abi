import java.io.*;

public class SumC{
  
  public static void main(String[] args){
    Console eingabe = System.console();
    System.out.println("Geben Sie ihren Grenzwert ein: ");
    int grenzwert = Integer.parseInt(eingabe.readLine());
    float ergebnis = 1; 
    for (int i=2;i<=grenzwert ;i++ ) {
      float zwischenergebnis = 1/i;
      ergebnis += zwischenergebnis;
    } // end of for
      System.out.println("Ihr Ergebnis lautet: " +ergebnis); 
    }
  }


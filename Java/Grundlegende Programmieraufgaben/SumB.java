import java.io.*;

public class SumB{
  
public static void main (String[] args){
    Console eingabe = System.console();
    System.out.println("Geben Sie ihren Grenzwert ein: ");
    int grenzwert = Integer.parseInt(eingabe.readLine());
    int ergebnis= 0;
    for (int i=1;i<= grenzwert ;i++ ) {
      if(i%2 != 0){
        ergebnis += i;
        }
      else{
      ergebnis-= i;
        }
    } // end of for
    System.out.println("Ihr Ergebnis betr�gt: " + ergebnis);
  }
  
  }
  

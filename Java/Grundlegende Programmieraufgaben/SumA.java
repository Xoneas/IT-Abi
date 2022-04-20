import java.io.*;

public class SumA{

    public static void main(String[] args) {
    Console eingabe = System.console();
    int ergebnis = 0;
    System.out.println("Geben Sie ihren Grenzwert ein: ");
    int grenzwert = Integer.parseInt(eingabe.readLine());
    for (int i=1;i<=grenzwert ;i++ ) {
      ergebnis += i;
    } // end of for
    System.out.println("Ihr Ergebnis betraegt: " +ergebnis);
  }
  }

import java.io.*;
public class KontoTest{
  
public static void main(String args[]){
    Console eingabe = System.console();
    Girokonto gk = new Girokonto("Max Müller","1234", -800);
    
    
    double abfrage = 0;
    while (abfrage == 0) {
      System.out.print("Einzahlen [E], Auszahlen[A], Beenden[B] :"); 
      char auswahl = eingabe.readLine().charAt(0);
    
  if(auswahl == 'E'){
      System.out.print("Summe einzahlen: ");
      double betrag = Double.parseDouble(eingabe.readLine());
      
      gk.einzahlen(betrag);
      System.out.println("");
    }
    
  else if(auswahl == 'A'){
      System.out.print("Summe auszahlen: ");
      double betrag = Double.parseDouble(eingabe.readLine());
      
      gk.auszahlen(betrag);
      System.out.println("");
    }
  
  else if(auswahl =='B'){
        System.out.println("Programmende");
        abfrage = 1;
    }
    
  else{
      System.out.println("Ungültige Eingabe");
  }
  }
  } 
}

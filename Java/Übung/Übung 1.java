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
nochmal = Boolean.parseBoolean(eingabe);
}



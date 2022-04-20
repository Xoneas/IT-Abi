import java.io.*;

public class Subtraktion {

public static void main (String[] args) {
Console eingabe = System.console();
System.out.println("Programm Subtraktion");
System.out.print("Zahl 1 = ");
double Zahl1 = Double.parseDouble(eingabe.readLine());
System.out.print("Zahl 2 = ");
double Zahl2 = Double.parseDouble(eingabe.readLine());
double Ergebnis = Zahl1 - Zahl2;
System.out.println("Das Ergebnis der Subtraktion von "+ Zahl1 +" und "+ Zahl2 +" lautet " + Ergebnis);
}
}

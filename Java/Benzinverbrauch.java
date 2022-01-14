import java.io.*;

public class Benzinverbrauch {

public static void main (String[] args) {
Console eingabe = System.console();
System.out.println("Programm Benzinverbrauch");
System.out.print("Verbrauchter Kraftstoff in Liter: ");
double Verbrauch = Double.parseDouble(eingabe.readLine());
System.out.print("Gefahrende Strecke in KM: ");
double Strecke = Double.parseDouble(eingabe.readLine());
double Durchschnitt = (Verbrauch * 100) / Strecke;
System.out.print("Der Durchschnittsverbrauch ist " + Durchschnitt + "1/100 km");
System.out.println("Programmende Benzin");
}
}

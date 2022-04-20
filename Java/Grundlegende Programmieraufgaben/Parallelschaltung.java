import java.io.*;
import java.text.DecimalFormat;

public class Parallelschaltung {

public static void main(String[] args) {
Console eingabe = System.console();
DecimalFormat df = new DecimalFormat("0.##"); 
System.out.println("Berechnung Gesamtwiderstandes zweier parallelgeschalteter Widerst�nde");
System.out.print("R1 = ");
double r1 = Double.parseDouble(eingabe.readLine());
System.out.print("R2 = ");
double r2 = Double.parseDouble(eingabe.readLine());
double ergebnis = (r1 * r2) / (r1 + r2);
System.out.println("Der Gesamtwiderst�nd betr�gt " + df.format(ergebnis) + " Ohm");
} 
} 

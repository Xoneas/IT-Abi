import java.io.*;


public class  PrimzahlmitInt{

public static void main(String[] args) {
int nochmal = 0;
System.out.println("Programm Primzahl");
while (nochmal == 0) { 
Console eingabe = System.console();
System.out.println("Geben sie die Zahl ein die ueberprueft werden soll = ");
long zahl = Integer.parseInt(eingabe.readLine());
if (zahl < 0) {
   System.out.println("Die Zahl muss positiv sein");
}
else {
boolean primzahl = false;
for (int i = 2; i*i <zahl; i++) {

if(zahl % i == 0) {
  System.out.println(zahl + "ist keine Primzahl, da teilbar durch " + i);
  primzahl = true;
  break;
}
}
if (primzahl == false) {
System.out.println(zahl + " ist eine Primzahl");

}
System.out.println("Noch einmal? Ja=0, Nein=1: ");
nochmal = Integer.parseInt(eingabe.readLine());
} 
}  
System.out.println("Programmende");
}
}   

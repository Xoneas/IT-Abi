import java.io.*;


public class  PrimzahlmitChar{

public static void main(String[] args) {
char nochmal = 'J'; //hochommata (shift + #)
System.out.println("Programm Primzahl");
while (nochmal == 'J') { 
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
System.out.println("Noch einmal? Ja=J, Nein=N: ");
nochmal = eingabe.readLine().charAt(0);
} 
}  
System.out.println("Programmende");
}
}   

class Girokonto extends Konto{
  private double kontostand;
  private double dispoLimit;
  private double dl;
  private double NeuKontostand = 0;
  public Girokonto(String ih, String kn, double dl){
    super(ih,kn);
    kontostand = 0;
    this.dl = dl;
    }
  
  public void auszahlen(double betrag){
    if(betrag < 0){
      System.out.println("Bitte einen Betrag über 0 eingeben!");
      }
    else{
      
      NeuKontostand = kontostand - betrag;
      
      if(NeuKontostand < dl){
        System.out.println("Sie würden den Dispositionskredit überschreiten!");
      }
      else{
        System.out.println(betrag +" Euro ausgezahlt");
        kontostand = NeuKontostand;
        }
      }
    System.out.print("Aktueller Kontostand: ");
    System.out.println(kontostand);
    }
  
  public void einzahlen(double betrag){
     
     
     if(betrag < 0){
      System.out.println("Bitte einen Betrag über 0 eingeben!");
      }
     else{
      System.out.println(betrag +" Euro eingezahlt");
      kontostand += betrag;
      }
    System.out.print("Aktueller Kontostand: ");
    System.out.println(kontostand);
    }
  
  public double getKontostand(){
    return kontostand;
    }
  
  public double getDispoLimit(){
    return dl;
    }
  
  public void setDispoLimit(double dl){
    this.dl = dl;
    }
  }

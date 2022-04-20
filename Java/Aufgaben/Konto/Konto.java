 class Konto{
  String ih;
  String kn;
  String inhaber;
  String kontonummer;
  public Konto(String ih, String kn){
    this.ih = ih;
    this.kn = kn;
    }
  
  public String getInhaber(){
    return inhaber;
    }
  
  public String getKontonummer(){
    return kontonummer;
    }
  
  public void setInhaber(String ih){
    this.ih = ih;
    }
  
  public void setKontonummer(String kn){
    this.kn = kn;
    }
  }

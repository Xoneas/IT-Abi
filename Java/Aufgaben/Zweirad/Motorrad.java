class Motorrad extends Kraftrad{
  int beifahrer;
  public Motorrad(String f, String b, double h, double l, int bf){
    super(f,b,h,l);
    beifahrer = bf;
  }
  
  public int getAnzahlBeifahrer(){
    return beifahrer;
  }
  
  public void setAnzahlBeifahrer(int bf){
    beifahrer = bf;
    }
  }

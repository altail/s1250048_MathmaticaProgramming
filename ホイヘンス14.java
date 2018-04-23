class sample{
  public static void main(String[] args){
    double basic=35.0/36;
    double now=35.0/36;
    int n=1;

    while(true){
      if(now<0.1){
        System.out.println(n);
        break;
      }
      n++;
      now*=basic;
    }
  }
}

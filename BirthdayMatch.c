#include <stdio.h>

int main(){
  int n;
  double now=1;
  double text=1;

  printf("人数を入力してください: ");
  scanf("%d",&n);

  for(int i=1;i<n;i++){
    now*=(365.0-i)/365.0;
    text*=1-(i/365.0);
  }

  printf("%f",1-now);
  printf("\n教科書ver.\n%f\n",1-text);
  
  return 0;
}

#include <stdio.h>
int main(){
  int n;
  double data[3];
  double sum=0;
  double average;
  double bunsan=0;

  printf("抽出するデータの要素数（個数）: ");
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    printf("データ%d個目 : ",i+1);
    scanf("%lf",&data[i]);
    sum+=data[i];
  }
  average=sum/n;

  for(int i=0;i<n;i++){
    bunsan+=(data[i]-average)*(data[i]-average);
  }
  bunsan/=(n-1);

  printf("標準平均:%f\n",average);
  printf("標準分散:%f\n",bunsan);
  return 0;
}

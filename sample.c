#include <stdio.h>
#include <stdlib.h>

int main(){
  int *array;
  int total=0,n;
  double GI=0;
  double average=0;
  double AverageDifference=0;

  printf("データの要素数 : ");
  scanf("%d",&n);
  array=(int *)malloc(n*sizeof(int));
  printf("データを空白区切りで入力してください\n");
  for(int i=0;i<n;i++)
   scanf("%d",&array[i]);

  for(int i=0;i<n;i++)
    average+=array[i];
  average/=n;

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(array[i]<array[j])
        total+=array[j]-array[i];
      else
        total+=array[i]-array[j];
    }
  }
  printf("%d\n",total);

  AverageDifference=(double)(total)/n/n;
  GI=AverageDifference/2/average;

  printf("平均差 : %f\nジニ係数 : %f\n",AverageDifference,GI);

  return 0;
}

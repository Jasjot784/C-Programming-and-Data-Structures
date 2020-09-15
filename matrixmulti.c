#include<stdio.h>
#define MAX 50

int main(){
  int a[MAX][MAX],b[MAX][MAX],product[MAX][MAX];
  int arows,acolumns,brows,bcolumns;
  int i,j,k;
  int sum = 0;

  printf("Enter the rows and columns of the matrix A:\n");
  scanf("%d %d",&arows,&acolumns);

  printf("Enter the elements of matrix A:\n");
  for(i = 0;i<arows;++i){
    for(j = 0;j<acolumns;++j)
    scanf("%d",&a[i][j]);
  }

  printf("Enter the rows and columns of the matrix B:\n");
  scanf("%d %d",&brows,&bcolumns);

  printf("Enter the elements of matrix B:\n");
  for(i = 0;i<brows;++i){
    for(j = 0;j<bcolumns;++j)
    scanf("%d",&b[i][j]);
  }

  if (brows != acolumns) {
    /* code */printf("Cannt Multiply\n");
  }else{
    printf("\n");
    for(i = 0;i<arows;++i){
      for(j = 0;j<bcolumns;++j){
        for(k = 0;k<brows;++k)
        sum += a[i][k]*b[k][j];
        product[i][j] = sum;
        sum = 0;
      }
    }
    printf("The resultant matrix is :\n");
    for(i = 0;i<arows;++i){
      for(j = 0;j<bcolumns;++j)
      printf("%d ",product[i][j]);
      printf("\n");
    }

  }



}

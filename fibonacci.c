#include<stdio.h>
int main(){
  int a,b,result,n,i;
  printf("Enter the number of terms:\n");
  scanf("%d",&n);

  a = 0;
  b = 1;

  for(int i = 0;i<=n;++i){
    printf("%d ",a);
    result = a+b;
    a = b;
    b = result;
  }
}

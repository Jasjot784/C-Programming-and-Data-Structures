#include<stdio.h>
int main(){
  int seen[10] = {0};
  int N;
  printf("Enter the number\n");
  scanf("%d",&N);

  int rem;
  while (N>0) {
    /* code */
    rem = N%10;
    if (seen[rem] == 1) {
      /* code */
      break;
    }seen[rem] = 1;
    N = N/10;
   }

   if (N>0) {
     /* code */
     printf("Yes\n");
   }else{
     printf("No\n");
   }
}

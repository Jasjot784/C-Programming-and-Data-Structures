#include<stdio.h>
int main(){
  int sum,carry,a,b;
  printf("Enter 2 numbers: \n");
  scanf("%d %d",&a,&b);

  while (b!=0) {
    /* code */
    sum = a^b;
    carry = (a&b)<<1;
    a = sum;
    b = carry;
  }
  printf("Sum of 2 numbers is: %d\n",sum);
}

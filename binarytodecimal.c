#include<stdio.h>
int main(){
  int decimal = 0 , binary , base = 1 , rem , num;
  printf("Enter a binary number:\n");
  scanf("%d",&binary);

  num = binary;

  while(binary!=0){
      rem = binary%10;
      decimal = decimal + rem*base;
      binary = binary/10;
      base*=2;
  }
  printf("Decimal equivalent of binary number %d is: %d\n",num,decimal);
  return 0;
}

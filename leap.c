#include<stdio.h>

int main(){
  int year;
  printf("Enter the year\n");
  scanf("%d",&year);

  if (year % 400 == 0) {
    /* code */
    printf("%d is a leap year\n",year);
  }else if (year % 100 == 0) {
    /* code */
    printf("%d is not a leap year\n",year);
  }else if (year % 4 == 0) {
    /* code */
    printf("%d is a leap year\n",year);
  }else{
    /* code */
    printf("%d is not a leap year\n",year);
  }

}

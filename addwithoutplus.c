#include<stdio.h>
int main(){
  int x,y;
  printf("Enter the 2 numbers you want to add: \n");
  scanf("%d %d",&x,&y);

  if (y>0) {
    while (y!=0) {
      x++;
      y--;
    }
  }else if(y<0){
    x--;
    y++;
  }


  printf("Sum of 2 values is : %d\n",x);
}

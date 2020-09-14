#include<stdio.h>
int areaOfRect(int l,int b){
  int area;
  area = l*b;
  return area;
}
int main(){
  int l = 10 , b = 5;
  int area = areaOfRect(l,b);
  printf("%d\n",area); 
}

#include<stdio.h>
#include<limits.h>
int main(){
  unsigned int var = UINT_MAX+1;
  printf("%d\n",var);

  int var2 = INT_MAX;
  var2+=1;
  printf("%d\n",var2);

}

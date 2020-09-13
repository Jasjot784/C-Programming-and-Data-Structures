#include<stdio.h>
#include<limits.h>
int main(){
  int var1 = INT_MIN;
  int var2 = INT_MAX;
  printf("range of signed integer is from : %d to %d\n",var1,var2);

  unsigned int var3 = 0;
  unsigned int var4 = UINT_MAX;
  printf("range of unsigned integer is from : %u to %u\n",var3,var4);

  short int var5 = SHRT_MIN;
  short int var6 = SHRT_MAX;
  printf("range of short signed integer is from : %d to %d\n",var5,var6);

  short unsigned int var7 = 0;
  short unsigned int var8 = USHRT_MAX;
  printf("range of short unsigned integer is from : %d to %d\n",var7,var8);

  long int var9 = LONG_MIN;
  long int var10 = LONG_MAX;
  printf("range of long signed integer is from : %ld to %ld\n",var9,var10);

  long unsigned int var11 = 0;
  long unsigned int var12 = ULONG_MAX;
  printf("range of long unsigned integer is from : %lu to %lu\n",var11,var12);

  long long int var13 = LONG_LONG_MIN;
  long long int var14 = LONG_LONG_MAX;
  printf("range of long long signed integer is from : %lld to %lld\n",var13,var14);

  long long unsigned int var15 = 0;
  long long unsigned int var16 = ULONG_LONG_MAX;
  printf("range of long long unsigned integer is from : %llu to %llu\n",var15,var16);


}

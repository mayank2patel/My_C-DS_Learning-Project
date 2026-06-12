#include<stdio.h>

int main(){

  unsigned int var1 = 4294967295;
  unsigned int var2 = 4294967296;

  printf("Result for unsigned int out of range limit: Max_limit : %u\nOut-of Bound : %u\n", var1, var2);

  int negative_var  =  -2147483648;
  int out_negative_var = -2147483649;

  int positive_var = 2147483647;
  int out_positive_var = 2147483648;

  printf("Result for signed int for negative range : Min_limit : %d\nOut-of Bound : %d\n", negative_var, out_negative_var);
  printf("Result for signed int for positive range : Max_limit : %d\nOut-of Bound : %d\n", positive_var, out_positive_var);


  return 0;
}

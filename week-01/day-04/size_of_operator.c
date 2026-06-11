#include<stdio.h>
#include<limits.h>


int main(){
  
  int var1 = INT_MIN;
  int var2 = INT_MAX;

  printf("Size of Integer(int) : %d\n", sizeof(int));
  printf("Range of signed integer is from : %d to %d\n", var1, var2);
  
  unsigned int un_var1 = 0;
  unsigned int un_var2 = UINT_MAX;

  printf("Range of unsigned integer is from : %u to %u\n", un_var1, un_var2);

  short int sh_var1 = SHRT_MIN;
  short int sh_var2 = SHRT_MAX;
  
  printf("Size of short Integer(int) : %d\n", sizeof(short int));
  printf("Range of signed short int is from : %d to %d\n", sh_var1, sh_var2);

  unsigned short int un_sh_var1 = 0;
  unsigned short int un_sh_var2 = USHRT_MAX;

  printf("Range of unsigned short int is from : %d to %d\n", un_sh_var1, un_sh_var2);

  long int ln_var1 = LONG_MIN;
  long int ln_var2 = LONG_MAX;

  printf("Range of signed long int is from : %ld to %ld\n", ln_var1, ln_var2);

  unsigned long un_ln_var1 = 0;
  unsigned long un_ln_var2 = ULONG_MAX;

  printf("Range of unsigned long int is from : %lu to %lu\n", un_ln_var1, un_ln_var2);

  return 0;
}

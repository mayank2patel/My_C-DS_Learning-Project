#include<stdio.h>

int main(){

  int two = 2, three = 3, six = 6;
  int result = (two + three) * six / three; 
  
  printf("Writing arithmetic expressions : (%d + %d) * %d / %d\n", two, three, six, three);
  printf("Result : %d\n",result);

  return 0;
}

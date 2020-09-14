#include<stdio.h>
#include<stdlib.h>
void passingAddressOfConstants(const int* num1, int* num2){
  *num1 = 100;
  *num2 = 200;
  printf("%d%d",*num1,*num2);
}
int main(){
  const int limit = 100;
  int result = 5;
  passingAddressOfConstants(&limit, &result);
  return 0;
}

#include<stdio.h>
#include<stdlib.h>
int (*fptr1)(int);

int square(int num){
  return num*num;
}

int main(){
  int n = 5;
  fptr1 = square;
  printf("%d squared is %d\n",n,fptr1(n));
  return 0;
}

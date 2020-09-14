#include<stdio.h>
#include<stdlib.h>
typedef int(*funcptr)(int);

int square(int num){
  return num*num;
}
int sum(int num){
  return num + num;
}
int main(){
  funcptr fptr2;
  int n = 5;
  fptr2 = square;
  printf("%d squred is %d\n",n,fptr2(n));
  fptr2 = sum;
  printf("%d summed is %d\n",n,fptr2(n));
}

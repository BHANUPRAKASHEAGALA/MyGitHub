#include<stdio.h>
#include<stdlib.h>
int add(int n1, int n2){
  return n1+n2;
}
int sub(int n1, int n2){
  if(n1 > n2){
    return n1 - n2;
  }
  else{
    return n2 - n1;
  }
}
int mul(int n1, int n2){
  return n1*n2;
}
typedef int (*fptrOperation)(int, int);

int compute(fptrOperation op, int a, int b){
  return op(a,b);
}

int main(){
  printf("%d\n",compute(add, 5, 6));
  printf("%d\n",compute(sub, 5, 6));
  printf("%d\n",compute(mul, 6, 5));
  return 0;
}

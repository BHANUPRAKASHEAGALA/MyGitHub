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

/*int compute(fptrOperation op, int a, int b){
  return op(a,b);
}*/
fptrOperation selecting(char opcode){
  switch(opcode){
    case '+': return add;
    case '-': return sub;
    case '*': return mul;
  }
}

int evaluate (char opcode, int n1, int n2){
  fptrOperation operation = selecting(opcode);
  return operation(n1,n2);
}

int main(){
  printf("%d\n",evaluate('+',5, 6));
  printf("%d\n",evaluate('-',5, 6));
  printf("%d\n",evaluate('*',5, 6));
  return 0;
}

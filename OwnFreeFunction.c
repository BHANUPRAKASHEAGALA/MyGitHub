#include<stdio.h>
#include<stdlib.h>
//#define saferFree(p) saferFree((void**)&(p))
void saferFree(void **pp){
  if(pp != NULL && *pp != NULL){
    free(*pp);
    *pp = NULL;
  }
}
int main(){
  int *pi;
  pi = (int*)malloc(sizeof(int));
  *pi = 5;
  printf("Before: %p\n", pi);
  saferFree((void**)&(pi));
  printf("After: %p\n", pi);
  saferFree((void**)&(pi));
  return (EXIT_SUCCESS);
}

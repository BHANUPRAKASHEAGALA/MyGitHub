#include<stdio.h>
#include<stdlib.h>
void allocateArray(int **arr, int size, int value){
  *arr = (int *)malloc(size * sizeof(int));
  if(*arr != NULL){
    for(int i=0;i<size;i++){
      *(*arr + i) = value;
    }
  }
  for(int i=0;i<size;i++){
    printf("%d\n",*(*arr + i));
  }
}
int main(){
  int *vector = NULL;
  allocateArray(&vector,5,45);
}

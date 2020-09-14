#include<stdlib.h>
#include<stdio.h>
int* allocateArray(int* arr, int value, int size){
  if(arr != NULL){
    for(int i=0;i<size;i++){
      arr[i] = value;
    }
  }
  return arr;
}
int main(){
  int* vector = (int*)malloc(5*sizeof(int));
  int *p = allocateArray(vector,35,5);
  for(int i=0;i<5;i++){
    printf("%d\n",*(p+i));
  }
  return 0;
}

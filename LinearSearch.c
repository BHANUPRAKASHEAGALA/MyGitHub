#include<stdio.h>
#include<stdlib.h>
int linearSearch(int *arr, int n, int value){
  int flag = 0;
  int temp;
  for(int i=0;i<n;i++){
    if(arr[i] == value){
      flag = 1;
      temp = i;
      break;
    }
    else{
      flag = 0;
    }
  }
  if(flag == 1) return temp;
}
int main(){
  int n;
  int k;
  int value;
  scanf("%d",&n);
  int *arr;
  arr = (int*)malloc(n * sizeof(int));
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  printf("Enter the element to be found:");
  scanf("%d",&value);
  k = linearSearch(arr,n,value);
  if(k)
    printf("Required element found at %d position\n",k);
  else{
    printf("Element not found in the Array");
  }
  return 0;
}

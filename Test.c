#include<stdio.h>
#include<stdlib.h>
float average(int *arr, int size){
  int sum = 0;
  printf("arr: %p\n",&arr);
  printf("size: %p\n", &size);
  printf("sum: %p\n",&sum);

  for(int i=0; i<size;i++){
    sum += arr[i];
  }
  return (sum * 1.0f) / size;
}
int main(int argc, char const *argv[]) {
  int n;
  int *arr;
  scanf("%d",&n);
  arr = (int*)malloc(n*sizeof(int));
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  printf("%f",average(arr,n));
  return 0;
}

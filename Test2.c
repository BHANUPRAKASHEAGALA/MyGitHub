#include<stdio.h>
#include<stdlib.h>
int main(){
  int n1,n2;
  scanf("%d%d",&n1,&n2);
  int **arr;
  //Allocating 2-Dimensional Non-Contiguous Memory
  arr = (int **)malloc(n1 * sizeof(int *));
  for(int i=0;i<n1;i++){
    arr[i] = (int*)malloc(n2 * sizeof(int));
  }
  for(int i=0;i<n1;i++){
    for(int j=0;j<n2;j++){
      scanf("%d",&arr[i][j]);
    }
  }
  for(int i=0;i<n1;i++){
    for(int j=0;j<n2;j++){
      printf("%d ",arr[i][j]);
    }
    printf("\n");
  }
  return 0;
}

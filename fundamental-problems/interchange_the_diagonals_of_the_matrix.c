/*
problem : Write a C program to interchange the diagonals of a square matrix of order N*N
Input:
1  2  3
4  5  6
7  8  9
output:
3  2  1
4  5  6
9  8  7

*/


#include<stdio.h>
int main(){
        
      int n;
      printf("enter size of 2-D array :");
      scanf("%d",&n);
      int arr[n][n];
      
      printf("enter of 2-D array :");
      for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                  scanf("%d",&arr[i][j]);
            }
            printf("\n");
      }
      for(int i=0;i<n;i++){
            int temp=arr[i][i];
            arr[i][i]=arr[i][n-1-i];
            arr[i][n-1-i]=temp;
      }
      for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                  printf("%d",arr[i][j]);
            }
            printf("\n");
      }
      
      


return 0;
}
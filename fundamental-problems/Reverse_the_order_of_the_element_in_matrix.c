#include<stdio.h>
int main(){
        
      int n,m;
      printf("enter size of 2-D array :");
      scanf("%d%d",&n,&m);
      int arr[n][m];
      
      printf("enter of 2-D array :");
      for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                  scanf("%d",&arr[i][j]);
            }
            printf("\n");
      }
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
                
                int temp=arr[n-1-i][m-1-j];
                arr[n-1-i][m-1-j]=arr[i][j];
                arr[i][j]=temp;
                
        }
      }
 for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                  printf("%d",arr[i][j]);
            }
            printf("\n");
      }
      return 0;
}
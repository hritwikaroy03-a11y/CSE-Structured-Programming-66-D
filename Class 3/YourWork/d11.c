#include<stdio.h>
int main(){
   int rows,cols,A[10][10],B[10][10],c[10][10];
   scanf("%d %d",&rows,&cols);
   for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
        scanf("%d",&A[i][j]);
    }
   } 
   for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
        scanf("%d",&B[i][j]);
    }
   }
   for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
        c[i][j]=A[i][j]+B[i][j];
        printf("%d ",c[i][j]);
    }
    printf("\n");
   }
}
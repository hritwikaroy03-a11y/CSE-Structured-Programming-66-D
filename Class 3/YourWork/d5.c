#include<stdio.h>
int main(){
    int n,arr[100];
    int evencount=0,oddcount=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            evencount++;
        }else{
            oddcount++;
        }
    }
    printf("even count=%d,odd count=%d\n",evencount,oddcount);
}
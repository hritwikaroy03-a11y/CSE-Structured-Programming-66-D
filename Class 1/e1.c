#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int sum=a+b;
    int sub=a-b;
    if(sum%2==0){
        printf("sum is even\n");
    }
    else{
        printf("sum is odd\n");
    }
    if(sub==0){
        printf("sub is zero\n");
    }
    else if(sub%2==0){
        printf("sub id even\n");
    }
    else{
        printf("sub is odd\n");
    }
    if(a>b){
        printf("a is greater than b\n");
    }
    else if(a<b){
        printf("b is greater than a\n");
    }
    else {
        printf("a equal to b\n");
    }
}
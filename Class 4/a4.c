#include<stdio.h>
int gethighestscore(int scores[],int n){
int max=scores[0];
for(int i=1;i<n;i++){
    if(scores[i]>max){
        max=scores[i];
    }
}
return max;
}
double getclassaverage(int scores[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=scores[i];
    }
    return (double)sum/n;
}
int main(){
    int n,scores[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&scores[i]);

    }
    printf("Highest score=%d\n",gethighestscore(scores,n));
    printf("Class Average=%.2lf\n",getclassaverage(scores,n));
    return 0;
}
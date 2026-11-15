#include<stdio.h>
int binarysearch(int arr[],int low,int high,int target){
    if(low>high){
        return -1;

    }
    int mid=(low+high)/2;
    if(arr[mid]==target){
        return mid;
    }else if(target<arr[mid]){
        return binarysearch(arr,low,mid-1,target);
    }else{
        return binarysearch(arr,mid+1,high,target);
    }
}
int main(){
    int n,arr[100],target;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&target);
    int index=binarysearch(arr,0,n-1,target);
    if(index!=-1){
        printf("Target found at index%d\n",index);
    }else{
        printf("Target not found\n");
    }
    return 0;
}

#include<stdio.h>
void attemptbonusreset(int bonus){
    bonus =0;
}
void applygracemarks(int marks[],int n,int bonus){
for(int i=0;i<n;i++){
    if(marks[i]>=35&&marks[i]<40){
        marks[i]+=bonus;
    }
}


}
int main(){
int n,marks[100],gracepoints=5;
scanf("%d",&n);
for(int i=0;i<n;i++){
    scanf("%d",&marks[i]);
}
attemptbonusreset(gracepoints);
applygracemarks(marks,n,gracepoints);
printf("Grace Points Variable in main:%d\n",gracepoints);
printf("Updated Marks: ");
for(int i=0;i<n;i++){
    printf("%d",marks[i]);
}
printf("\n");
return 0;

}
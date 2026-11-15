#include<stdio.h>
int calculateTotal(int quiz,int midterm,int finalexam){
    return quiz+midterm+finalexam;
}
double calculatepercentage(int totalmarks,int maxmarks){
    return ((double)totalmarks/maxmarks)*100.0;

}
char assigngrade(double percentage){
    if(percentage>=80.0)return 'A';
    if(percentage>=65.0)return 'B';
    if(percentage>=50.0)return 'c';
    return 'F';
}
int main(){
    int quiz,mid,finalexam;
    scanf("%d %d %d",&quiz,&mid,&finalexam);
    int total=calculateTotal(quiz,mid,finalexam);
    double pct=calculatepercentage(total,100);
    char grade=assigngrade(pct);
    printf("Total:%d/100|percentage:%.2lf%%|Grade:%c\n",total,pct,grade);
    return 0;
}
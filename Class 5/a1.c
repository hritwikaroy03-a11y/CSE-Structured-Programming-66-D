 #include<stdio.h>
 int main(){
char course[]="CSE-101";
const char*university="DUET";
course[0]='E';
printf("Updated course:%s\n",course);
printf("University:%s\n",university);
university="BUET";
printf("New university:%s\n",university);
return 0;

 }
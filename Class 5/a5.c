#include<stdio.h>
int main(){
    char firstname[30],lastname[30];
    char section;
    printf("Enter first name and last name:");
    scanf("%s %s",firstname,lastname);
    printf("Enter section(A/B/C):");
    scanf("%c",&section);
    printf("Student:%s %s |section:%c\n",firstname,lastname,section);
    return 0;
}
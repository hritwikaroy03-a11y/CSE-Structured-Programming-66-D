#include<stdio.h>
int ispalindromerecursive(char str[],int left,int right){
    if(left>=right){
        return 1;
    }
    if(str[left]!=str[right]){
        return 0;
    }
    return ispalindromerecursive(str,left+1,right-1);

}
int main(){
    char word[50];
    scanf("%s",word);
    int len=0;
    while(word[len]!='\0'){
        len++;
    }
    if(ispalindromerecursive(word,0,len-1)){
        printf("Palindrome\n");
    }else{
        printf("Not a palindrome\n");
    }
    return 0;
}
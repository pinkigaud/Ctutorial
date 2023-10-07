// WAP to find a character entered by user is upper case or not.
#include<stdio.h>

int main(){
    int ch;
    printf("Enter a character:");
    scanf("%c", &ch);
    if(ch>='A'&& ch<='Z'){
    // ch>=97 & ch>='a   // both are same
        printf("Upper case\n");
    }
    else if(ch>='a'&& ch<='z'){
        printf("Lower case\n");
    }
    else{
        printf("Not English Letter\n");
    }
}
// Check if a given character is present in a string or not.
#include<stdio.h>
#include<string.h>

int isPresent(char str[], char c);
int main(){
    char str[100], c;
    printf("Enter a string: ");
    gets(str);
    printf("Enter a character to check: ");
    scanf("%c", &c);
    if(isPresent(str, c)){
        printf("The character is present in the string.");
    }
    else{
        printf("The character is not present in the string.");
    } 
    return 0;
}
int isPresent(char str[], char c){
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]==c){
            return 1;
        }
    }
    return 0;
}
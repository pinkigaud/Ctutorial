// Ctreate a string firstName & lastName  to stor details of user & print all the characters using  a loop.
#include<stdio.h>
void printString(char str[]);
int main(){
    char firstName[] = "Pinki";
    char lastName[] = "Gaud";
    printString(firstName);
    printString(lastName);
    
    return 0;
}
void printString(char arr[]){
    for (int i = 0;  arr[i]!='\0'; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");
    
}
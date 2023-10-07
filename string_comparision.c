// Standard library function strcmp() can be used to compare two strings.
#include<stdio.h>
#include<string.h>
void printString(char arr[]);
int  countLength(char arr[]);

int main(){
    char firstStr[]="Apple ";
    char secondStr[]="Banana";
   
    printf("%d", strcmp( secondStr,firstStr));
    return 0;
}
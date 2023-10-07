// standard Library function string concatenation strcat() can be used to concatenate two strings.
#include<stdio.h>
#include<string.h>

void printString(char arr[]);
int  countLength(char arr[]);
 int main(){
    char firstStr[100]="Pinki ";
    char secondStr[]="Gaud";
    strcat(firstStr, secondStr);
    puts(firstStr);

 }
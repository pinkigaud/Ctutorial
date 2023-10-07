// gets() puts() fgets()  string 
#include <stdio.h>
void printString(char arrr[]);
int main()
{
    // char str[50];
    // gets(str);
    // fgets(str, 50, stdin);
    // puts(str);
char *canChange="Hello World";
puts(canChange);
canChange="Hello World 2";
puts(canChange);

char canNotChange[]="Hello World";
puts(canNotChange);
//canNotChange="hello";       //This will give an error(not possible)



    return 0;
}
void printString(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");
}
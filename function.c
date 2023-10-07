#include<stdio.h>
//Declaration/Prototype of function
void printHello(); //Function prototype
int main()
{
    printHello(); //Function call
    printHello(); //Function call
    printHello(); //Function call
    printHello(); //Function call
    return 0;
}
// function definition
void printHello()
{
    printf("Hello World\n");
    printf("This is a function\n");
}
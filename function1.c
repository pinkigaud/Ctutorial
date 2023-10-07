#include<stdio.h>
//Declaration/Prototype of function
void printHello();
void printGoodbye();
int main(){
     //Function call
    printHello();
    printGoodbye();
    return 0;
}
// function definition
void printHello(){
    printf("Hello World\n");
}
void printGoodbye(){
    printf("Goodbye World\n");
}

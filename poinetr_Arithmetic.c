// Pointer Arithmetic
#include <stdio.h>

int main()
{
    // integer pointer

    // int age=22;
    // int *ptr=&age;
    
    //float pointer

    // float price = 100.5;
    // float *ptr = &price;

    // char pointer 
    char star='*';
    char *ptr=&star;

    printf("The address of age is %u\n", ptr);
    ptr++;
    printf("The address of age is %u\n", ptr);
    ptr--;
    printf("The address of age is %u\n", ptr);
    return 0;
}
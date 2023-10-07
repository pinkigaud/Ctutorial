// Make a program that inputs user's name & prints its length.
#include <stdio.h>
#include<string.h>
void printString(char arr[]);
int countLength(char arr[]);
int main()
{
    // char name[100];
    // fgets(name, 100, stdin);
    // printf("length of your name is:%d", countLength(name));

    // Standard library function strlen() can also be used to find the length of a string.
    // char name[]="Pinki";

    // printf("length of your name is:%d", strlen(name));

    // type cast
    char name[]="Swapnil";
    int length = strlen(name);
    printf("length of your name is:%d", length);

    return 0;
}
int countLength(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count-1;
}
void printString(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");
}
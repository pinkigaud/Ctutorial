#include <stdio.h>
void printString(char str[]);
int main()
{
    char name[50];
    scanf("%s", name);
    printf("Your name is: %s", name);
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
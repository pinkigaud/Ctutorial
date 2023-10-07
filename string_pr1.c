// Ask the user to enter their firstName & print it back to them.
 

#include <stdio.h>
void printString(char str[]);
int main()
{
    // char firstName[50];
    // scanf("%s", firstName);
    // printf("Your name is:%s",firstName);

    //Also try this with their full name.
    char fullName[100];
    scanf("%s", fullName);
    printf("Your name is:%s", fullName);
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
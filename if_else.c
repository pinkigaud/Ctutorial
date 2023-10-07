// WAP for if -else statement

#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("Adult\n");
        printf("You can vote\n");
        printf("You can drive\n");
    }
    else if (age > 13 && age < 18)
    {
        printf("Teenager\n");
    }

    else
    {
        printf("Child\n");
        printf("Not an adult\n");
    }
}
/**
 * C program to print number using nested if  else
 */
#include<stdio.h>

int main(){
    int number;
    printf("Enter a number:");
    scanf("%d", &number);
    if(number>=0){
        printf("Positive\n");
        if(number%2==0){
            printf("Even\n");
        }
        else{
            printf("Odd\n");
        }

    }
    else{
        printf("Negative\n");
    }
    return 0;
}

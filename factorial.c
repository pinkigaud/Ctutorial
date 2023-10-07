// Print the factorial of a number n
#include<stdio.h>

int main(){
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    int factorial=1;
    for (int i=1;  i<=n;  i++){
        factorial= factorial*i; // factorial*=i
    }
    printf("factorial is: %d\n", factorial);
    return 0;

}
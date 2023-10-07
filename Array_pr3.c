// Write a program to store the first n fibonacci numbers in an array.
#include<stdio.h>
 int main(){
        int n;
        printf("Enter the number of fibonacci numbers you want to store in an array n(n>2): ");
        scanf("%d", &n);
        int fibo[n];
        fibo[0] = 0;
        fibo[1] = 1;
        for (int i = 2; i < n; i++)
        {
            fibo[i] = fibo[i-1] + fibo[i-2];
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d\t", fibo[i]);
        }
        printf("\n");
        
        return 0;
 }
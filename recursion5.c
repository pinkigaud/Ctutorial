// Write a function to print n terms of the fibonacci series/sequence.
#include<stdio.h>
int fibonacci(int n);

int main(){
    int n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    printf("The fibonacci series upto %d terms is:\n",n,fibonacci(n));
     for (int i = 0; i <=n; i++)
    {
        printf("%d ",fibonacci(i));
    }
    return 0;
}

int fibonacci(int n){
    if (n==0 || n==1)
        return n; // fibonacci of 0 is 0 and fibonacci of 1 is 1 (base condition)
    
    int fibonacciNm1=fibonacci(n-1); // fibonacci of n-1
    int fibonacciNm2=fibonacci(n-2); // fibonacci of n-2
    int fibonacciN=fibonacciNm1+fibonacciNm2; // fibonacci of n
    return fibonacciN;
    
}
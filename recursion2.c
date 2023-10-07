// factorial using recursion
#include<stdio.h>
int factorial(int n);
int main(){
    int n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    printf("The factorial of %d is %d\n",n,factorial(n));
    return 0;
}
int factorial(int n){
    if (n==1 || n==0)
        return 1; // factorial of 1 is 1 (base condition)
    
    int factorialNm1=factorial(n-1); // factorial of n-1
    int factorialN=n*factorialNm1; // factorial of n
    return factorialN;
    
}
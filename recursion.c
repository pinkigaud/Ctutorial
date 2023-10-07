// sum of first n natural numbers using recursion
#include<stdio.h>
int sum(int n);
int main(){
    int n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    printf("The sum of first %d natural numbers is %d\n",n,sum(n));
    return 0;
}
int sum(int n){
    if (n==1)
        return 1; // sum of 1 to 1 is 1 (base condition
    
    int sumNm1=sum(n-1); // sum of 1 to n
    int sumN=sumNm1+n; // sum of 1 to n-1
    return sumN;
    
}
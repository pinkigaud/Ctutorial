// keep taking numbers as input from the user, till the user enters a number which is a multiple of 7 but not a multiple of 5.
#include<stdio.h>

int main(){
    int n;
    do{
        printf("Enter a number:");
        scanf("%d", &n);
        printf("%d\n",n);
        if(n%7==0 && n%5!=0){
           break;
        }
    }
    while(1); //  always true
    printf("Thank You\n");
    return 0;
} 
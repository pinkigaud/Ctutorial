// Keep taking input from the user until the user enters an odd number.
#include<stdio.h>

int main(){
    int n;
    do{
        printf("Enter a number:");
        scanf("%d", &n);
        printf("%d\n",n);
        if(n%2!=0){
           break;
        }
    }
    while(1); //  always true
    printf("Thank You\n");
    return 0;
}
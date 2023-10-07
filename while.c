// While Loop Example
#include<stdio.h>

int main(){
    int i=1;
    while(i<=5){
        printf("Hello World\n");
        i++;
    } 
    // print the numbers from 0 to n is given by user n=4.
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    int j=0;
    while(j<=n){
        printf("%d\n",j);
        j++;
    }

}
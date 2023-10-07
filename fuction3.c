// print 2 numbers valuse and return the sum of them
#include<stdio.h>

int sum(int a, int b);

int main(){
    int a,b;
    printf("Enter 1 numbers\n");
    scanf("%d", &a);
    printf("Enter 2 numbers\n");
    scanf("%d", &b);
    int s = sum(a,b);
    printf("The sum is   :%d\n", s);
    return 0;
}
int sum(int a, int b){
    return a+b;
}


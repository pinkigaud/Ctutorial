// pointer
#include<stdio.h>

int main(){
    int x;
    int *ptr;
    ptr=&x;
    *ptr=0;
    printf("The value of x = %d\n",x);
    printf("The value of *ptr= %d\n",*ptr);
    *ptr +=5;
    printf("The value of x = %d\n",x);
    printf("The value of *ptr= %d\n",*ptr);
    (*ptr)++;
    printf("The value of x = %d\n",x);
    printf("The value of *ptr= %d\n",*ptr);
    return 0;
}
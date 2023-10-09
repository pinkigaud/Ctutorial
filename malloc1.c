// WAP to allocate memory to store 5 prices.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr=(float*)malloc(5*sizeof(float));
    for(int i=0;i<5;i++){
        printf("Enter the value of %d element: ",i+1);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<5;i++){
        printf("The value of %d element is: %d\n",i+1,ptr[i]);
    }
    return 0;
}
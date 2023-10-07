//print the value of 'i' from its  pointer to pointer 
#include <stdio.h>
int main(){
    // float price=100.0;
    // float *ptr=&price;
    // float **pptr=&ptr;
    // printf("The value of price = %f\n",price);
    // printf("The value of *ptr= %f\n",*ptr);
    // printf("The value of **pptr= %f\n",**pptr);
    int i=5;
    int *ptr=&i;
    int **pptr=&ptr;
    printf("The value of i = %d\n",i);
    printf("The value of *ptr= %d\n",*ptr);
    printf("The value of **pptr= %d\n",**pptr);

    return 0;
}
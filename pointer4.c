// Write a function to calculate the sum , product and average of two numbers .print that average in main function.
#include <stdio.h>
void doWork(int a, int b, int *sum, int *product, float*average);
int main()
{
    int a = 3, b = 5;
    int sum, product;
    float average;
    doWork(a, b, &sum, &product, &average);
    printf("The sum is %d\n", sum);
    printf("The product is %d\n", product);
    printf("The average is %f\n", average);
    return 0;
}
void doWork(int a, int b, int *sum, int *product, float*average)
{
    *sum = a + b;
    *product = a * b;
    *average = (a + b) / 2;
    printf("The sum is %d\n", sum);
    printf("The product is %d\n", product);
    printf("The average is %f\n", average);
}
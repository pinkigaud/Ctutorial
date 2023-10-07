// Swap 2 numbers, a & b, using pointers
# include <stdio.h>
void swap(int *a, int *b);
void _swap(int a, int b);
int main()
{
    int x = 4, y = 5;
    printf("The value of x is %d and the value of y is %d\n", x, y);
    swap(&x, &y);
    printf("The value of x is %d and the value of y is %d\n", x, y);
    _swap(x, y);
    return 0;
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b=temp;
     printf("The value of a is %d and the value of b is %d\n", *a, *b);
}
// call by value
void _swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b=temp;
    printf("The value of a is %d and the value of b is %d\n", a, b);
     
}
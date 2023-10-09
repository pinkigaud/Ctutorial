// Create a stucture to store complex numbers. (use arrow opdrator)
#include <stdio.h>
#include <string.h>

struct complex
{
    int real;
    int img;
};
int main()
{
    struct complex number1 = {5, 8};
    struct complex *ptr = &number1;
    printf("img part=%d\n", ptr->img);
    printf(" real part=%d\n", ptr->real);
    return 0;
}
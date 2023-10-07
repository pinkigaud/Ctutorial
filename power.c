#include <stdio.h>
#include <math.h>
int main()
{
    int b, c;
    b = c = 1;
   //  int a = (int)1.99999; // type conversion operator
   int a= 4+9*10;

    int power = pow(b, c);
    printf("%d \n", power);
    printf("%d \n", 16 % 3);    // modulo operator
    printf("%f \n", 2.2 * 2.4); // type conversion operator
    printf("%d \n", a);         // type conversion operator
    return 0;
}
// Create a stucture to store vectors. Then make a function to return a function to return the sum of two vectors passed to it.
#include <stdio.h>
#include <string.h>
struct vector
{
    int x;
    int y;
};
void calculteSum(struct vector v1, struct vector v2, struct vector sum);

int main()
{
    struct vector v1 = {5, 10};
    struct vector v2 = {10, 15};
    struct vector sum = {0};
    calculteSum(v1, v2, sum);
    return 0;
}
void calculteSum(struct vector v1, struct vector v2, struct vector sum)
{
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;
    printf("The sum of the vector is: %d\n %d\n", sum.x, sum.y);
}

// Write a program to calculate the area of a circle. (radius is given)
#include<stdio.h>
int main(){
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    printf("The area of the circle is: %f", 3.14*radius*radius);
    return 0;
}
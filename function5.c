// write function to calculate area of a square , a circle and a rectangle.
#include<stdio.h>
#include<math.h>
 float squareArea(float side);
    float circleArea(float radius);
    float rectangleArea(float length,float breadth);

 int main(){
    float length=5.0;
    float breadth=10.0;
    float side=3.0;
    float radius=1.0;
    printf("Area of circle is :%f\n",circleArea(radius));
    printf("Area of square is :%f\n",squareArea(side));
    printf("Area of rectangle is :%f\n",rectangleArea(length,breadth));

    return 0;
 }
 float squareArea(float side){
     return side*side;
 }
 float circleArea(float radius){
     return 3.14*radius*radius;
 }
    float rectangleArea(float length,float breadth){
        return length*breadth;
    }
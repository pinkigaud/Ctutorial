// Write a program to enter price of 3 items & print their final cost with GST using Array.
#include<stdio.h>

int main(){
    
    
float price[3];
float gst=0.18;
printf("Enter the prices of 3 items\n");
scanf("%f %f %f",&price[0],&price[1],&price[2]);
printf("total price 1:%f\n", price[0]+(price[0]*gst));
printf("total price 2:%f\n", price[1]+(price[1]*gst));
printf("total price 3:%f\n", price[2]+(price[2]*gst));


    return 0;
}
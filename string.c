// String
#include<stdio.h>

int main(){
    char name[]={'P','I','N','K','I','\0'};
    char class[]={'G','A','U','D','\0'};
    char _name[]="PINKI";
    char _class[]="GAUD";

    printf("Name: %s\n", name);
    printf("Class: %s\n", class);
    printf("Name: %s\n", _name);
    printf("Class: %s\n", _class);
    return 0;
}
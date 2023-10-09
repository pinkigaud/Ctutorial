// TypeDef Keyworkd: typedef
#include<stdio.h>
#include<string.h>
typedef struct ComputerEnginnerinStudent
{
    int rollNo;
    float cgpa;
    char name[100];
} coe;
typedef struct student{
    int rollNo;
    float cgpa;
    char name[100];
} std;

int main(){
coe s1;
s1.rollNo=2009102;
s1.cgpa=8.56;
strcpy(s1.name,"Pinki");
printf("The name of the student is: %s\n", s1.name);
printf("The roll number of the student is: %d\n", s1.rollNo);
printf("The cgpa of the student is: %f\n", s1.cgpa);
return 0;

}
// Pasing stucture to finction,
#include<stdio.h>
#include<string.h>
struct student
{
    int rollNo;
    float cgpa;
    char name[100];
};
// function prototype

 void printInfo(struct student s1);
 int main(){
     struct student s1={2009102,8.56,"Pinki"};
     printInfo(s1);
     s1.rollNo=2009103;
     printf("The roll number of the student is: %d\n", s1.rollNo);
     return 0;
 }
    void printInfo(struct student s1){
        printf("student information:\n");
        printf("The name of the student is: %s\n", s1.name);
            printf("The roll number of the student is: %d\n", s1.rollNo);
            printf("The cgpa of the student is: %f\n", s1.cgpa);
        s1.rollNo=2009103;
    }
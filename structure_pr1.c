//  Write a program to store the data of 3 student.
#include<stdio.h>
#include<string.h>
struct student
{
    int rollNo;
    float cgpa;
    char name[100];
};
int main(){
    struct student s1,s2,s3;
    {
        s1.rollNo = 2009102;
        s1.cgpa = 8.56;
        strcpy(s1.name, "Pinki");
        printf("The name of the student is: %s\n", s1.name);
        printf("The roll number of the student is: %d\n", s1.rollNo);
        printf("The cgpa of the student is: %f\n", s1.cgpa);
      
        s2.rollNo = 2009103;
        s2.cgpa = 9.0;
        strcpy(s2.name, "Jyotika");
        printf("The name of the student is: %s\n", s2.name);
        printf("The roll number of the student is: %d\n", s2.rollNo);
        printf("The cgpa of the student is: %f\n", s2.cgpa);
       
        s3.rollNo = 2009104;
        s3.cgpa = 7.56;
        strcpy(s3.name, "Swapnil");
        printf("The name of the student is: %s\n", s3.name);
        printf("The roll number of the student is: %d\n", s3.rollNo);
        printf("The cgpa of the student is: %f\n", s3.cgpa);
        return 0;
    };
}
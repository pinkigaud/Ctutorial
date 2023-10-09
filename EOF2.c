// Make a program to input student information from a user & enter it to a file.
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("Student.txt","w");
    char name[20];
    int age;
    float cgpa;
    printf("Enter your name: ");
    scanf("%s",name);
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("Enter your cgpa: ");
    scanf("%f",&cgpa);
    fprintf(fptr,"%s\t",name);
    fprintf(fptr,"%d\t",age);
    fprintf(fptr,"%f\t",cgpa);

    fclose(fptr);
    return 0;
}
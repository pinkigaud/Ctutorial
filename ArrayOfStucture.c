// Array Of tucture.
#include<stdio.h>
#include<string.h>

struct student
{
    int rollNo;
    float cgpa;
    char name[100];
};



int main(){
    //  Array of structure
    struct student ECE[100];
    ECE[0].rollNo = 2009102;
    ECE[0].cgpa = 8.56;
    strcpy(ECE[0].name, "Pinki");
    printf("The name of the student is: %s\n", ECE[0].name);
    printf("The roll number of the student is: %d\n", ECE[0].rollNo);
    printf("The cgpa of the student is: %f\n", ECE[0].cgpa);

    //  Initializing the structure variable

    struct student s1={2009102,8.56,"Pinki"};
  {
        printf("The name of the student is: %s\n", s1.name);
        printf("The roll number of the student is: %d\n", s1.rollNo);
        printf("The cgpa of the student is: %f\n", s1.cgpa);

  };
  // pointer to structure
  struct student *ptr=&s1;
  {
    printf("The name of the student with ptr is: %s\n", (*ptr).name);
        printf("The roll number of the student with ptr is: %d\n", (*ptr).rollNo);
        printf("The cgpa of the student with ptr is: %f\n", (*ptr).cgpa);
      

  };
  // Arrow operator
  printf("student->rollNo is %d\n",ptr->rollNo);
    printf("student->cgpa is %f\n",ptr->cgpa);
    printf("student->name is %s\n",ptr->name);


    
    return 0;


    
}

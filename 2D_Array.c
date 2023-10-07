// Multidimentional Array
#include<stdio.h>

int main(){
    //2 students, 3 subjects marks stored
    int marks[2][3];
    marks[0][0]=90;
    marks[0][1]=89;
    marks[0][2]=78;

    marks[1][0]=67;
    marks[1][1]=87;
    marks[1][2]=98;

  printf("Student 1 marks: %d %d %d\n", marks[0][0], marks[0][1], marks[0][2]);
    printf("Student 2 marks: %d %d %d\n", marks[1][0], marks[1][1], marks[1][2]);
        return 0;

}
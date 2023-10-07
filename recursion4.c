// Write a function to calculate Percentage of students from marks in  Science , Math & Sanskrit.
#include<stdio.h>
int calculatePercentage(int science,int math,int sanskrit);
int main(){
    int science,math,sanskrit;
    printf("Enter the marks of science:\n");
    scanf("%d",&science);
    printf("Enter the marks of math:\n");
    scanf("%d",&math);
    printf("Enter the marks of sanskrit:\n");
    scanf("%d",&sanskrit);
    printf("The percentage of student is %d\n",calculatePercentage(science,math,sanskrit));
    return 0;
}
int calculatePercentage(int science,int math,int sanskrit){
   return ((science+math+sanskrit)/3);
}
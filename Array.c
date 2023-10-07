#include<stdio.h>
int main(){
    int marks[3];
    printf("Enter the marks of Phy\n");
    scanf("%d",&marks[0]);
    printf("Enter the marks of chem\n");
    scanf("%d",&marks[1]);
    printf("Enter the marks of math\n");
    scanf("%d",&marks[2]);
    printf("Phy=%d, Chem=%d, Math=%d\n",marks[0],marks[1],marks[2]);
    return 0;
}
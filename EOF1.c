// Make a program to read 5 integers from a file.
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("Text.txt","r");
    int n;
    fscanf(fptr,"%d",&n);
    printf("number is %d\n",n);
    fscanf(fptr,"%d",&n);
    printf("number is %d\n",n);
    fscanf(fptr,"%d",&n);
    printf("number is %d\n",n);
    fscanf(fptr,"%d",&n);
    printf("number is %d\n",n);
    fscanf(fptr,"%d",&n);
    printf("number is %d\n",n);
    fclose(fptr);

    return 0;
}

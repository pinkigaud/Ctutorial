// Writting to a file .
#include<stdio.h>
#include<string.h>
int main(){
    FILE *fptr;
    fptr=fopen("Text.txt", "a");
    fprintf(fptr, "%c",'M');
    fprintf(fptr, "%c",'A');
    fprintf(fptr, "%c",'N');
    fprintf(fptr, "%c",'G');
    fprintf(fptr, "%c",'O');
    fclose(fptr);
        return 0;
}
// File input output.
#include<stdio.h>
#include<string.h>

int main(){
    FILE *fptr;
    fptr=fopen("Text.txt", "r");
    fclose(fptr);
    return 0;
     
}
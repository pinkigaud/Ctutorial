// Check if a file exists before reading from it.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    FILE *fptr;
    fptr=fopen("NewText.txt", "w");
    if(fptr==NULL){
        printf("The file does not exist\n");
        exit(1);
    }
    else{
    fclose(fptr);
}
    return 0;
     
}


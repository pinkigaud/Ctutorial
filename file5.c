// Read & Write a char.
#include<stdio.h>
#include<string.h>

int main(){
    FILE *fptr;
    // //Reading a char.
    // fptr=fopen("Text.txt", "r");
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    
    // Write a char.

    fptr=fopen("Text.txt", "w");
    fputc('M',fptr);
    fputc('A',fptr);
    fputc('N',fptr);
    fputc('G',fptr);
    fputc('O',fptr);
    
    fclose(fptr);
    return 0;

}
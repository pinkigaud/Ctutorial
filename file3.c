// Reading from a file.
#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fptr;
    fptr = fopen("Text.txt", "r");
    char ch;

    fscanf(fptr, "%c", &ch);
    printf(" Charecter=%c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf(" Charecter=%c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf(" Charecter=%c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf(" Charecter=%c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf(" Charecter=%c\n", ch);
    fclose(fptr);
    return 0;
}
// Write a function named slice , whice takes a string & returns a sliced string from index n to m.
#include<stdio.h>
#include<string.h>
void slice(char str[], int n, int m);

int main(){
    char str[100];
    int n, m;
    printf("Enter a string: ");
    gets(str);
    printf("Enter the starting index: ");
    scanf("%d", &n);
    printf("Enter the ending index: ");
    scanf("%d", &m);
    slice(str, n, m);
    return 0;
}
void slice(char str[], int n, int m){
    char slicedStr[100];
    int i = 0;
    while (n <= m)
    {
        slicedStr[i] = str[n];
        i++;
        n++;
    }
    slicedStr[i] = '\0';
    puts(slicedStr);
}

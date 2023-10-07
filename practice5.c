// print all numbers from 1 to 10 expect for 6.
#include<stdio.h>

int main(){
    int i=1;
    while(i<=10){
        if(i==6){
            i++;
            continue;
        }
        printf("%d\n",i);
        i++;
    }
    return 0;
}
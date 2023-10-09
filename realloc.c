// Allocate memory for 5 numbers. Then dynamically  increasrd it to 8  numbers.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr=(int*)calloc(5,sizeof(int));
    ptr[0]=1;
    ptr[1]=2;
    ptr[2]=3;
    printf("Enter numbers[5]:");
    for(int i=0;i<5;i++){
        scanf("%d\n",&ptr[i]);
    }
    ptr=realloc(ptr,8);
    printf("Enter numbers[8]:");
    for(int i=0;i<8;i++){
        scanf("%d\n",&ptr[i]);
    }
    // print 
    for(int i=0;i<8;i++){
        printf(" number %d  is %d\n",i,&ptr[i]);
    }
    return 0;

}

// malloc()
#include<stdio.h>
#include<stdlib.h>
int main(){
    // int *ptr;
    // ptr=(int*)malloc(6*sizeof(int));
    // for(int i=0;i<6;i++){
    //     printf("Enter the value of %d element: ",i+1);
    //     scanf("%d",&ptr[i]);
    // }
    // for(int i=0;i<6;i++){
    //     printf("The value of %d element is: %d\n",i+1,ptr[i]);
    // }

    // printf("%d\n",sizeof(int));
    // printf("%d\n",sizeof(float));
    // printf("%d\n",sizeof(char));
    int *ptr;
    ptr=(int*)malloc(5*sizeof(int));
    ptr[0]=1;
    ptr[1]=3;
    ptr[2]=5;
    ptr[3]=7;
    ptr[4]=9;
    for(int i=0;i<5;i++){
        printf("The value of %d element is: %d\n",i+1,ptr[i]);
    }


    return 0;
}
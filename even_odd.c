// Write a program to check if a numberis even or odd.
 # include<stdio.h>
    #include<math.h>
    // even->1
    //odd->0
    int main(){
        int x;
        printf("Enter a number: ");
        scanf("%d",&x);
        printf("%d",x%2==0);
        return 0;
    }
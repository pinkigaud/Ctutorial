// Enter address (house no, block, city, state) of 5 pepole.
#include<stdio.h>
#include<string.h>

struct address
{
    int houseNo;
    int block;
    char city[100];
    char state[100];
};
// void printAddress(struct address add);
int main(){
    struct address adds[5];
    //input 
    printf("Enter the address of 5 people:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the house no of %d person:\n",i+1);
        scanf("%d",&adds[i].houseNo);
        printf("Enter the block of %d person:\n",i+1);
        scanf("%d",&adds[i].block);
        printf("Enter the city of %d person:\n",i+1);
        scanf("%s",adds[i].city);
        printf("Enter the state of %d person:\n",i+1);
        scanf("%s",adds[i].state);
        return 0;
        
    }
}
// printf("Enter info for 1 person:\n");
// scanf("%d",&adds[0].houseNo);
// scanf("%d",&adds[0].block);
// scanf("%s",adds[0].city);
// scanf("%s",adds[0].state);
// printf("Enter info for 2 person:\n");
// scanf("%d",&adds[1].houseNo);
// scanf("%d",&adds[1].block);
// scanf("%s",adds[1].city);
// scanf("%s",adds[1].state);
// printf("Enter info for 3 person:\n");
// scanf("%d",&adds[2].houseNo);
// scanf("%d",&adds[2].block);
// scanf("%s",adds[2].city);
// scanf("%s",adds[2].state);
// printf("Enter info for 4 person:\n");
// scanf("%d",&adds[3].houseNo);
// scanf("%d",&adds[3].block);
// scanf("%s",adds[3].city);
// scanf("%s",adds[3].state);
// printf("Enter info for 5 person:\n");
// scanf("%d",&adds[4].houseNo);
// scanf("%d",&adds[4].block);
// scanf("%s",adds[4].city);
// scanf("%s",adds[4].state); 

// printAddress(adds[0]);
// printAddress(adds[1]);
// printAddress(adds[2]);
// printAddress(adds[3]);
// printAddress(adds[4]);

// // output
// return 0;
//  }
//  void printAddress(struct address add){
//      printf("addreess is:%d, %d, %s %s\n, adds.houseNo, adds.block, adds.city, adds.state");
//  }
// Make a structure to store Bank Account information of a custoner of ABC Bank. Also , make an alias for it .
#include<stdio.h>
#include<string.h>
typedef struct BankAccount
{
    int accountNumber;
    char name[100];
    int balance;
}
acc;
int main(){
    acc acc1={1234, "Sahil", 100000};
    acc acc2={1235, "Rahil", 400000};
    printf("The account number of %s is %d and his balance is %d\n", acc1.name, acc1.accountNumber, acc1.balance);
    printf("The account number of %s is %d and his balance is %d\n", acc2.name, acc2.accountNumber, acc2.balance);
    return 0;

    }

// Finthe salted form of a password enterd by the user if the salt is"123" & added at the end.
#include <stdio.h>
#include <string.h>
void salting(char password[]);

int main()
{
    char password[100];
    scanf("%s", password);
    salting(password);
}
void salting(char password[])
{
    char salt[] = "123";
    char newPassword[200];
    strcpy(newPassword, password); // newPassword = "test"
    strcat(newPassword, salt);     // new password = "test"+"123"
    puts(newPassword);
}
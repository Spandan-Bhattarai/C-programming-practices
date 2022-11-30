#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char usrn1[100], pswd1[100], usrn2[100], pswd2[100];
    printf("Enter username and password to store it \n");
    gets(usrn1);
    gets(pswd1);
    printf("Stored succesfully \t\n Enter username and password again to verify it\n");
    printf("username: \t");
    gets(usrn2);
    printf("password: \t");
    gets(pswd2);
    if(!strcmp(usrn1, usrn2) && !strcmp(pswd1, pswd2))
    {
        printf("\nSucesfully logged in");
    }
    else{
        printf("\nIncorrect username or password");
    }
    return 0;
}

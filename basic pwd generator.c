#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int password(int pwd_length)
{
    char list[] = "1234567890qwertyuiopasdfghjklzxcvbnm!@#$%^&*()_- +=QWERTYUIOPASDFGHJKLZXCVBNM[]{};':\"<>,.?/\|";

    srand(time(NULL));
    for(int i = 0; i < pwd_length; i++)
    {
        printf("%c", list[rand() % (sizeof list - 1)]);
    }

}
int main()
{
    int pwd_length;
    printf("Welcome to the password generator\n");
    printf("Enter length of the password = ");
    scanf("%d", &pwd_length);
    password(pwd_length);
    return 0;
}

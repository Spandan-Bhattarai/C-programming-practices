#include <stdio.h>
int main()
{
    char str1;
    printf("Enter a character: ");
    scanf("%c", &str1);
    if(str1>='a' && str1<='z')
    {
        printf("Lower Case");
    }
    else
    {
        printf("Upper Case");
    }
    return 0;
}

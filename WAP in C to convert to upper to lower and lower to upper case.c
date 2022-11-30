#include <stdio.h>
int main()
{
    char str1;
    printf("Enter a character: ");
    scanf("%c", &str1);
    if(str1>='a' && str1<='z')
    {
        str1=str1-32;
        printf("%c",str1);
    }
    else{
        str1=str1+32;
        printf("\n %c",str1);
    }
    return 0;
}

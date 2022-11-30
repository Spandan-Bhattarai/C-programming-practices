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
    else if (str1>='A' && str1<='Z')
    {
        str1=str1+32;
        printf("\n %c",str1);
    }
    else{
        printf("other character");
    }
    return 0;
}

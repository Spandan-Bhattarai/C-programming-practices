#include<stdio.h>
int main()
{
    char c, vow[12]="aeiouAEIOU";
    int i;
    printf("Enter a character: ");
    scanf("%c", &c);
    for(i=0;i<12;i++)
    {
        if(c==vow[i])
        {
            printf("It's vowel");
            goto out;
        }
    }
    printf("It's cons");
    out:
        return 0;
}

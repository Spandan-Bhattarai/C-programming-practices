#include<stdio.h>
int main()
{
    char c, vow[12]="aeiouAEIOU";
    printf("Enter a character: ");
    scanf("%c", &c);
    for(int i=0;i<12;i++)
    {
        if(c==vow[i])
        {
            printf("It's vowel");
            goto out;
        }
    }
    printf("It's constant");
    out:
        return 0;
}

#include<stdio.h>
int main()
{
    char c;
    int lv, uv;
    printf("Enter a character: ");
    scanf("%c", &c);
    lv = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    uv = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if (lv || uv)
        printf("It's a vowel");
    else
        printf("it's a constant");
    return 0;
}
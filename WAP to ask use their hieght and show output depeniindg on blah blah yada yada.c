/***
WAP to ask user their height in cm, if it is greater than 160 cm, ask the yser about their occupation, and display the hieght and occupation.
Else, (height<160 cm), ask their age and display the height and age
***/
#include<stdio.h>
void main()
{
    int h;
    printf("Enter your height \n");
    scanf("%d", &h);
    if(h>160)
    {
        char occ[100];
        printf("Enter your occupation \n");
        scanf("%s", &occ);
        printf("Your height is %d and your occupation is %s \n", h, occ);
    }
    else
    {
        int age;
        printf("Enter your age \n");
        scanf("%d", &age);
        printf("Your height is %d and your age is %d \n", h, age);
    }
}

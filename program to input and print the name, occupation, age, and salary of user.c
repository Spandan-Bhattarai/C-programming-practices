#include<stdio.h>
#include<math.h>
int main()
{
    char name[50],occupation[50], age[20], salary[10];
    printf("Enter your name occupation age and salary in respective oreder \n");
    gets(name);
    gets(occupation);
    gets(age);
    gets(salary);
    printf("Your name is %s \n", name);
    printf("Your occupation is %s \n", occupation);
    printf("Your age is %s \n", age);
    printf("Your salary is %s \n", salary);
    return 0;
}
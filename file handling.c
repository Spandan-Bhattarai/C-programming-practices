#include<stdio.h>

#define DATA_SIZE 1000
void main()
{
    char name[15];
    char data[DATA_SIZE];
    FILE * fPtr;
    fPtr = fopen("files/file2.txt", "r");
    fgets(data, DATA_SIZE, fPtr);
    fputs(data, stdout);

    fclose(fPtr);
    printf("File read successfully. :) \n");
    getch();
}

// 4. Write a program to convert a given string into uppercase
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i;
    char a[50];
    system("cls");
    printf("Enter the string : ");
    gets(a); // fgets()giving problem at end
    for (i = 0; a[i] != 0; i++)
        printf("%c", a[i] - 32);
    printf("\n");
    getch();
    return 0;
}
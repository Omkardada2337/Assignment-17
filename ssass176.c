// 6. Write a program to reverse a string.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i, j;
    char a[50];
    system("cls");
    printf("Enter the string : ");
    gets(a);
    for (i = 0; a[i] != 0; i++);
    printf("\nReversed string is : ");
    for (j = i - 1; j >= 0; j--)
        printf("%c", a[j]);
    getch();
    return 0;
}
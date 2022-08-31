// 1. Write a program to calculate the length of the string. (without using built-in method)
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i;
    char a[50];
    system("cls");

    printf("Enter the string : ");
    fgets(a,50,stdin);
    for ( i = 0; a[i]!=0; i++);
    printf("\nLength of the string is %d",i-1);
    
    getch();
    return 0;
}
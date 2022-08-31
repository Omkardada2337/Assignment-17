// 9. Write a C program to sort a string array in ascending order.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i, j, t;
    char a[30];
    system("cls");

    printf("Enter the string : ");
    fgets(a, 30, stdin);
    for (i = 0; i < strlen(a) - 1; i++)
    {
        for (j = i + 1; j < strlen(a); j++)
        {
            if (a[i] > a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    printf("\nSorted string is : ");
    puts(a);
    getch();
    return 0;
}
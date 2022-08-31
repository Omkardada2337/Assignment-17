// 7. Write a program in C to count the total number of alphabets, digits and special
// characters in a string.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i, j, count = 0, counta = 0, countd = 0;
    char a[50];
    system("cls");
    printf("Enter the string : ");
    gets(a);

    for (i = 0; a[i] != 0; i++)
    {
        if ((a[i] >= 65 && a[i] <= 90) || (a[i] >= 97 && a[i] <= 122))
        {
            counta++;
        }
        else if (a[i] >= 48 && a[i] <= 57)
        {
            countd++;
        }
        else
            count++;
    }
    printf("\nNo. of alphabets : %d\nNo. of digits : %d\nNo. of special characters : %d ", counta, countd, count);
    getch();
    return 0;
}
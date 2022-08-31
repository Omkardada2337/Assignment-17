// 2. Write a program to count the occurrence of a given character in a given string.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i, a[123] = {0};
    char b[50], c;
    system("cls");
    printf("Enter the string : ");
    fgets(b, 50, stdin);
    for (i = 0; i < 50; i++)
        a[b[i]]++;
    printf("Enter the character : ");
    scanf("%c", &c);
    printf("frequency of %c is %d ", c, a[c]);
    getch();
    return 0;
}
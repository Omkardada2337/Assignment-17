// 8. Write a program in C to copy one string to another string.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i;
    char a[30], b[30];
    system("cls");

    printf("Enter the first string : ");
    fgets(a, 30, stdin);
    strcpy(b, a);
    printf("\nAfter copying first string in second string : ");
    printf("%s",b);

    getch();
    return 0;
}
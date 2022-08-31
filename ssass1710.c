// 10. Write a program in C to Find the Frequency of Characters.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i, arr[123] = {0};
    char a[40];
    system("cls");
    printf("Enter the string : ");
    fgets(a, 40, stdin);
    for (i = 0; i <= strlen(a) - 2; i++)
        arr[a[i]]++;
    printf("\nFrequency of characters : \n");
    for (i = 0; i < 123; i++)
        if (arr[i] >= 1)
            printf("%c : %d\n", i, arr[i]);
    getch();
    return 0;
}
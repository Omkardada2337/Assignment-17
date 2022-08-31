// 3. Write a program to count vowels in a given string
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i, count = 0;
    char b[50];
    system("cls");
    printf("Enter the string : ");
    fgets(b, 50, stdin);
    for (i = 0; i < 50; i++)
        if (b[i] == 'a' || b[i] == 'e' || b[i] == 'i' || b[i] == 'o' || b[i] == 'u' || b[i] == 'A' || b[i] == 'E' || b[i] == 'I' || b[i] == 'O' || b[i] == 'U')
            count++;      
    printf("Number of vowels in the string are %d ", count);
    getch();
    return 0;
}
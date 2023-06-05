//Write a C program to find whether a given character is alphanumeric.


#include <stdio.h>
#include<conio.h>
int isAlphaNumeric(char ch)
{
    if ((ch >= '0' & ch <= '9') || (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        return 1;

    return 0;
}

void main()
{
    char ch = 0;

    printf("Enter character: ");
    scanf("%c", &ch);

    if (isAlphaNumeric(ch))
        printf("Given character is an alphanumeric character\n");
    else
        printf("Given character is not an alphanumeric character\n");

    getch();
}

/*Write a program to convert the lower case character into upper case (vice versa).*/
#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z')
    {
        ch=ch-32;
        printf("\n%c",ch);
    }
    else if(ch>='A'&&ch<='Z')
    {
        ch=ch+32;
        printf("\n%c",ch);
    }
    else{
        printf("invalid entry");
    }
    getch();
}

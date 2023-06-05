#include<stdio.h>
void main()
{
    int n,rem;
    printf("enter the no.");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        rem=rem*10+rem;
        n=n/10;
    }
    printf("%d",n);
    getch();
}

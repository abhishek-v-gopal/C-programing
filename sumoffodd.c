#include<stdio.h>
void main()
{
    int i,n,sum=0;
    printf("enter the limit");
    scanf("%d",&n);
    for(i=1;i<=n*2;i++)
    {
        if(i%2==1)
        {
            sum=sum+i;
        }
    }
    printf("sum is %d",sum);
    getch();
}

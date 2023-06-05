#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int mark[6],i,u;
    float sum=0,percent;
    printf("Enter the mark");
    for(i=0;i<6;i++)
    {
        scanf("%d",&mark[i]);
    }
    for(i=0;i<6;i++)
    {
        sum=sum+mark[i];
    }
    printf("\nsum=%f",sum);
    percent=(sum/1200);
    u=percent*100;
    printf("\n\npercentage = %f%%\n",u);
    return 0;
}

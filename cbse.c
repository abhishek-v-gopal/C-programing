#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int mark[5],i;
    float sum=0,percent;
    printf("Enter the mark");
    for(i=0;i<5;i++)
    {
        scanf("%d",&mark[i]);
        sum=sum+mark[i];
    }
    printf("sum = %f",sum);
    percent=(sum/500)*100;
    printf("\n percentage =%f",percent);
    return 0;
}

#include<stdio.h>
void main()
{
    int a[10],i,n;
    printf("enter the limit");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the elements are");

     for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }

}

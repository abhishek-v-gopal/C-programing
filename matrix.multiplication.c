#include<stdio.h>
void main()
{
    int i,j,a[100][100],b[100][100],s[100][100],r1,c1,r2,c2,k;
    printf("enter the rows and coloms of 1st matrix");
    scanf("%d%d",&r1,&c1);
    printf("enter the rows and coloms of 1st matrix");
    scanf("%d%d",&r2,&c2);
    for(i=0;i<c1;i++)
    {
        for(j=0;j<r1;j++)
        {
            printf("enter the %d,%d th element of 1st matrix",i+1,j+1);
            scanf("%d",a[i][j]);
        }
    }
     printf("\n\n\n");
      for(i=0;i<c2;i++)
    {
        for(j=0;j<r2;j++)
        {
            printf("enter the %d,%d th element of 2nd matrix",i+1,j+1);
            scanf("%d",a[i][j]);
        }
    }
    //multiplication
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            for(k=0;k<c;k++)
            {
                s[i][j]=s[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    //print
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d\t",s[i][j]);
        }
        printf("\n");
    }
    getch();
}

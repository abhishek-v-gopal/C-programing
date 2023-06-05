#include<stdio.h>
void main()
{
    int i,j,a[100][100],b[100][100],s[100][100],row,colom;
    printf("enter the no.of rows and colums of matrix");
    scanf("%d%d",&row,&colom);
    //first matrix
    for(i=0;i<colom;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("enter the %d%dth element of first matrix",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    //second matrix
     for(i=0;i<colom;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("enter the %d%dth elements of second matrix",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    //additon
    for(i=0;i<colom;i++)
    {
        for(j=0;j<row;j++)
        {
            s[i][j]=a[i][j]+b[i][j];
        }
    }
    //print
    for(i=0;i<colom;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("%d\t",s[i][j]);

        }
        printf("\n");
    }
    getch();

}

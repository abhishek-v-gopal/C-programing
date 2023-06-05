/*Write a C prganto calculate the average of odd and even numbers
separately from a set of given integers. Given an option to stop the
 program execution when the number 9999 entered and ignore the cases of negative numbers being enterd
  (Use entry controlledloop structure of C and break and continue statement.)*/
#include<stdio.h>
void main()
{
    int a[20],n,i,even,odd,e=0,o=0;
    float avgeven,avgodd;
    printf("how many elements are thire");
    scanf("%d",&n);
    printf("enter the set of integers");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            //even no
            even=even+a[i];
            e++;
            if(a[i]==9999 || a[i]<0)
            {
                break;
            }else
            {
                continue;
            }
        }else{
            //odd
            odd=odd+a[i];
            o++;
              if(a[i]==9999 || a[i]<0)
            {
                break;
            }else
            {
                continue;
            }
        }

    }
    avgeven=even/e;
    printf("avg of even no. is %f",avgeven);
    avgodd=odd/o;
    printf("\navg of odd no. is %f ",avgodd);
    getch();
}

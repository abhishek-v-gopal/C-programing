#include<stdio.h>
struct vehicle
{
    char owner[20],company[20],pucc[4],reg_no[10];
    int ageofvehicle;
}a[100];
void main()
{
    int n,i;
    printf("enter the no of vehicles to be entered");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the name of the owner:");
        scanf("%s",a[i].owner);
        printf("Enter the registration no:");
        scanf("%s",a[i].reg_no);
        printf("Enter the name of the company:");
        scanf("%s",a[i].company);
        printf("Enter the age of vehicle:");
        scanf("%d",&a[i].ageofvehicle);
        printf("Enter the status of pucc:");
        scanf("%s",a[i].pucc);
    }
    for(i=0;i<n;i++)
    {
        printf("\nOwner:%s",a[i].owner);
        printf("\nReg_no:%s",a[i].reg_no);
        printf("\nCompany:%s",a[i].company);
        printf("\nAge of the vehicle:%d",a[i].ageofvehicle);
        printf("\nStatus pucc:%s",a[i].pucc);
    }
    getch();
}

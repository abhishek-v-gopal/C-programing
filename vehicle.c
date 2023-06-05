#include<stdio.h>
struct vehicle
{
    char owner[25],company[20],reg_no[10],pucc[4];
    int ageofvehicle;
}a;
void main()
{
    printf("enter the name of owner\n");
    scanf("%s",a.owner);
    printf("enter the registeration no.\n");
    scanf("%s",a.reg_no);
    printf("enter the name of company\n");
    scanf("%s",a.company);
    printf("enter the age of vehicle");
    scanf("%d",&a.ageofvehicle);
    printf("pucc status(yes/no)");
    scanf("%s",a.pucc);
    printf("\n\nThe details of vehicle is\n\n");
    printf("name of the owner:%s\n",a.owner);
    printf("registeration no:%s\n",a.reg_no);
    printf("name of the company:%s\n",a.company);
    printf("age of the vehicle:%d\n",a.ageofvehicle);
    printf("pucc status:%s\n",a.pucc);
    getch();
}

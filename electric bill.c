/*An Electricity board charges the following
rates for the use of electricity: for the first
200 units 80 paise per unit: for the next 100 units 90 paise per unit:
    beyond 300 units Rs 1 per unit. All users are changed a minimum of Rs. 100 as meter charge.
    If the total amount is more than Rs 400, then an additional surcharge of 15% of total amount is charged.
     Write a program in c to read the name of the user, number of units consumed and print out the charges.*/
#include<stdio.h>
#include<conio.h>
void main()
{
 float unit=0,charge=0,surcharge,per=0,total=0;
 char name[25];
 printf("enter the name of the coustamer:");
 gets(name);
 printf("enter the unite of electricity is used:");
 scanf("%f",&unit);

 if(unit<200)
{
    charge=unit*0.80;
}
if(unit>200 && unit<=300)
{
    charge=unit*0.90;
}
if(unit>300)
{
    charge=unit*1.00;
}
if(charge>400)
{

    surcharge=charge*15/100;
}
printf("\nname:%s",name);
printf("\nunits used:%f",unit);
printf("\namount:%f",charge);
printf("\nsurcharge:%f",surcharge);
printf("\nmeter fee:100");
total=charge+100+surcharge;
printf("\ntotal amount to pay:%f",total);


getch();
}

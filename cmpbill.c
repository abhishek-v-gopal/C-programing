/*A company produces three types of products Fan, AC and TV. The company gives discount for
bulk purchases. The discount rate is as follows:
No of items
ordered

Product Discount rate

20 or more | Fan  |12%
10 or more | AC   |15%
5 or more  | TV   |08%

Otherwise there is no discount. Assuming the order can be for one item or more than one item at a
time, write a C program to prepare a cash bill for a customer who buys these products. Use
appropriate decision making statement in your program.*/
#include<stdio.h>
void main()
{
    int item,order;
    float disc,amount;
    printf("1.Fan\n2.AC\n3.Tv\n");
    printf("enter the item no.\n");
    scanf(" %d",&item);
    switch(item)
    {
        case 1: printf("cost of one fan=1,000\n");
                printf("discount 12%\n");
                printf("Enter the no of orders:\n");
                scanf("%d",&order);
                if(order>=20)
                {
                    disc=0.12*order*1000;
                    amount=(order*1000)-disc;
                    printf("amount=%f",amount);
                }else
                {
                    amount=order*1000;
                    printf("amount=%f",amount);

                }
                break;
        case 2: printf("cost of one AC=45,990\n");
                printf("discount 15%\n");
                printf("Enter the no of orders:\n");
                scanf("%d",&order);
                if(order>=10)
                {
                    disc=0.15*order*45990;
                    amount=(order*45990)-disc;
                    printf("amount=%f",amount);
                }else
                {
                    amount=order*45990;
                    printf("amount=%f\n",amount);

                }
                break;
        case 3: printf("cost of one TV=19,999\n");
                printf("discount 8%\n");
                printf("Enter the no of orders:\n");
                scanf("%d",&order);
                if(order>=5)
                {
                    disc=0.12*order*19999;
                    amount=(order*19999)-disc;
                    printf("amount=%f\n",amount);
                }else
                {
                    amount=order*19999;
                    printf("amount=%f\n",amount);

                }
                break;
        default:printf("something went wrong");
        break;

    }
getch();
}

/*Given the age,sex and height of a number of people.Write a C program to calculate the number of
males, females, average male height and average female height in the group*/

#include<stdio.h>
int n,i,femalec,malec,age;
float height,avgf,avgm,maleh,femaleh;
void main(){
    char sex;
    printf("Enter the Total Number of PEople: ");
    scanf("%d",&n);
    printf("\nEnter the Details: ");
    for(i=1;i<=n;i++){
        printf("\nEnter the Age: ");
        scanf("%d",&age);
        printf("\nEnter the sex(M/F): ");
        scanf(" %c",&sex);
        printf("\nEnter the Height: ");
        scanf("%f",&height);

            if(sex=='M'||sex=='m')
            {
                maleh+=height;
                malec++;
            }
            else if(sex=='F'||sex=='f'){
                femaleh+=height;
                femalec++;
            }
    }
        if(malec>0){
            avgm=maleh/malec;
        }else{avgm=0;}
        if(femalec>0){
            avgf=femaleh/femalec;
        }else{avgf=0;}


              printf("\nTotal number of Male is:%d ",malec);
              printf("\nAverage Height of Male is: %f",avgm);
              printf("\nTotal number of female is:%d ",femalec);
              printf("\nAverage Height of female is: %f",avgf);
}

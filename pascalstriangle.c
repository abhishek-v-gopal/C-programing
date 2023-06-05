#include <stdio.h>

int main() {
int rows, i, j, choice;
char op=0;

printf("Enter the number of rows for Pascal's triangle: ");
scanf("%d", &rows);
printf("Enter your choice of pattern: \n");
printf("1. Left-aligned triangle\n");
printf("2. Right-aligned triangle\n");
scanf("%d", &choice);
switch (choice) {
case 1:
for (i = 0; i < rows; i++)
    {
     for (j = 0; j <= i; j++)
     {
        int num = 1;
        for (int k = 1; k <= i; k++)
        {
            num = num * (i - k + 1) / k;
        }
        printf("%d ", num+i);
    }
    printf("\n");
  }
break;
case 2:
for (i = 0; i < rows; i++)
 {
     int numOfSpaces = rows - i - 1;
     for (j = 0; j < numOfSpaces; j++)
     {
         printf(" ");
     }
     for (j = 0; j <= i; j++)
      {
          int num = 1;
          for (int k = 1; k <= i; k++)
            {
               num = num * (i - k + 1) / k;
            }
          printf("%d ", num);
      }
     printf("\n");
 }
 break;
 default:
   printf("Invalid choice");
}

getch();
return 0;
}

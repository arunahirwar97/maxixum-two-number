#include<stdio.h>
#include<conio.h>
int main()
{
   int i,num1,num2;

   printf("enter the value ");
   scanf("%d%d",&num1,&num2);

   if(num1>num2)
       {
       printf("%d is maximum",num1);
       }
       else
	 {
       printf("%d is maximum",num2);

       }

       getch();
       return 0;
       }
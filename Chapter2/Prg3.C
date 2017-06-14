/* Program to find whether number is positive or negative
checknum.c            */
# include<stdio.h>
void main()
{
signed int num=0;
clrscr();
printf("Enter number:");
scanf("%d", &num);
if(num>0)			// if num>0 then it is positive
{
printf("\n %d is positive number", num);
}
else
{
printf("\n %d is negative number", num);         //  if num < 0  then it is negative
}
getch();
}

// program to find out factorial of number using function.
# include<stdio.h>
void main()
{
long int fact(void);
clrscr();
printf("\n The factorial of number %d",fact());
getch();
}
long int fact(void)
{
int no=1;
long fact=1,i=0;
printf("\n Enter number:");
scanf("%d", &no);
for (i=1;i<=no;i++)
{
fact=fact*i;
}
return fact;
}





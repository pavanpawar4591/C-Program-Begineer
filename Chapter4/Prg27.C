# include<stdio.h>
long int fact(int);
void main()
{
int no=1;
clrscr();
printf("\n Enter number:");
scanf("%d", &no);
printf("Factorial of number=%ld",fact(no));
getch();
}
long int fact(int n)
{
long int f;
if(n==1)
{
return 1 ;
}
else

f=n*fact(n-1);
return (f);
}




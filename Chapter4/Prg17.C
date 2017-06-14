//program to write a function to identify number whether it is prime or not.
# include<stdio.h>
void prime(int);
void main()
{
int no=0;
clrscr();
printf("\n Enter number:");
scanf("%d", &no);
prime(no);
getch();
}
void prime(int n)
{
if (n==3 || n==5 || n==7)
{
printf("\n %d is prime",n);
}
else
{
if(n%2>0 && n%3>0 && n%5>0 && n%7>0)
{
printf("\n %d is prime",n);
}
else
{
printf("\n %d is not prime",n);
}
}

}
// program to calculate prime numbers from 1 to 50.
# include<stdio.h>
int primeadd(void);
void main()
{
int ans=0;
clrscr();
ans=primeadd();
printf("\n Additin of prime numbers from 1-50=%d",ans);
getch();
}
int primeadd()
{
int i=1, sum=0;
printf("\n Prime numbers are:\n");
for (i=1;i<=50;i++)
{
if (i==3 || i==5 || i==7)
{
printf("%d\t",i);
sum=sum+i;
}

if(i%2>0 && i%3>0 && i%5>0 && i%7>0)
{
sum=sum+i;
printf("%d\t", i);
}

}
return sum;
}


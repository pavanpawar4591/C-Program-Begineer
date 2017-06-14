# include<stdio.h>
int add(int *);
void main()
{
int *pt, pos=0;
printf("\n enter position:");
scanf("%d", &pos);
pt=&pos;
printf("%d", add(pt));
getch();
}
int add(int *p)
{
int i=0;
int sum=0;
for(i=1;i<=(*p);i++)
{
sum=sum+i;
}
return sum;
}
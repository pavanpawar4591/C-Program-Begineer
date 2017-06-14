# include<stdio.h>
void zero_cnt(int *);
void main()
{
int arr[5], *p;
int i=0;
clrscr();
for(i=0;i<=4;i++)
{
printf("\nEnter elements:");
scanf("%d", &arr[i]);
}
p=&arr[0];
zero_cnt(p);
getch();
}

void zero_cnt(int *x)
{
int i=0, cnt=0;
for(i=0;i<=4;i++)
{
if( (*x)==0)
{
cnt++;
}
x++;
}
printf("\n Number of zeros=%d",cnt);
}

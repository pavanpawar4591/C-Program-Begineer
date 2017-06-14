
# include<stdio.h>
void main()
{
int i=1, cnt1=0,cnt2=0, cnt3=0, no=0;
clrscr();
for(i=1;i<=10;i++)
{
printf("\n Enter value");
scanf(" %d", &no);
if (no==0)
{
cnt1++;
}
if (no<0)
{
cnt2++;
}
if (no>0)
{
cnt3++;
}
}

printf("\n Positive numbers.=%d\t Negative numbers=%d\t Zeros=%d", cnt3,cnt2,cnt1);
getch();
}

 # include<stdio.h>
void main()
{
int number[5];
int i=0,cnt1=0,cnt2=0,cnt3=0;
clrscr();
for(i=0;i<=4;i++)
{
printf("\n Enter number:");
scanf("%d", &number[i]);
if (number[i]<0)
{
cnt1++;
}
if (number[i]==0)
{
cnt2++;
}
if (number[i]>0)
{
cnt3++;
}

}
printf("\n Number of Negative numbers= %d", cnt1);
printf("\n Number of zeros=%d", cnt2);
printf("\n Number of Positive numbers= %d",cnt3);
getch();
}


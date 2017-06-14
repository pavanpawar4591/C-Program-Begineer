// program to write the power function
# include<stdio.h>
main()
{
int num=0, raiseto=0;
void power(int, int);
clrscr();
printf("\nEnter number:");
scanf("%d", &num);
printf("\nEnter raise to:", &raiseto);
scanf("%d", &raiseto);
power(num, raiseto);
getch();
}
void power(int n, int r)
{
int i=1;
int ans=1;
for (i=1;i<=r;i++)
{
ans=ans*n;
}
printf(" %d raise to %d=%d", n,r,ans);
}


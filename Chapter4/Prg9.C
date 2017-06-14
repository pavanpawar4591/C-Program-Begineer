//program to print odd numbers from 1 to 50
# include<stdio.h>
void odd_prn(void);
void main()
{
clrscr();
odd_prn();
getch();
}
void odd_prn()
{
int i=1;
printf("\n Odd numbers from 1 to 50:\n");
for(i=1;i<=50; i+=2)
{
printf("%d\t", i);
}
}


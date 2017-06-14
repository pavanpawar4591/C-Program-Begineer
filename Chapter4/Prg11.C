// Program to convert decimal to binary
# include<stdio.h>
# include<math.h>
void conv_deci(void);
void main()
{
clrscr();
conv_deci();
getch();
}
void conv_deci()
{
int num=0;
int dnum=0;
int i=0, rem=0;
printf("Enter binary no.:");
scanf("%d", &num);
printf("Decimal of %d is :", num);
while(num!=0)
{
rem=num%10;
dnum=dnum+(pow(2,i)*rem);
num=num/10;
i++;
}
printf("%d", dnum);
}
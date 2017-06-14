// program to find out the sum of digits.
# include<stdio.h>
int digit_sum(int);
main()
{
int no;
clrscr();
printf("\n Enter number:");
scanf("%d", &no);
printf("Sum of digits of %d=%d",no,digit_sum(no));
getch();
}
int digit_sum(int num)
{
int rem=0, sum=0;
while(num!=0)
{
rem=num%10;
sum=sum+rem;
num=num/10;
}
return sum;
}

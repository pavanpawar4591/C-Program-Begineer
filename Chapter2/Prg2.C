/* Program to find whether number is even or odd.
evenodd.c              */
# include<stdio.h>
void main()
{
int num=0;
clrscr();
prxintf("Enter number:");
scanf("%d", &num);
if(num%2==0)			// if num%2 is zero then number is divisible by 2 so it is even
{
printf("\n %d is even number", num);
}
else
{
printf("\n %d is odd number " ,num);                 //  num%2 is non zero then number is odd
}
getch();
}

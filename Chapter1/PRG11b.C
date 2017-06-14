/*  To display the entered number with trailing zeros and leading zeros
   prnzero.c  */
# include<stdio.h>
void main()
{
long int num=0;
clrscr();
printf("Enter number:");
scanf("%d",&num);
printf("\n %11d",num);
printf("\n %5d",num*1000);
getch();
}

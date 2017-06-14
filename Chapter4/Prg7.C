// program to find out whether number is even or odd.
# include<stdio.h>
void main()
{
void evenodd(void);
clrscr();
evenodd();
getch();
}
void evenodd()
{
int number=25;
if (number%2==0)
printf("%d is even", number);
else
printf("%d is odd", number);
}
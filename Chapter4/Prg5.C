// to add two numbers using add function
# include<stdio.h>
void main()
{
void add(void);
clrscr();
add();
getch();
}
void add()
{
int a=0,b=0;
printf("\n Enter first number:");
scanf("%d", &a);
printf("\n Enter second number:");
scanf("%d", &b);
printf("\n The addition of %d + %d =%d", a, b,a+b);
}
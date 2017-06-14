// Addition of two numbers using call by reference.
int add(int *, int*);
# include<stdio.h>
main()
{
int a=0,b=0;
clrscr();
printf("\n Enter first number:");
scanf("%d", &a);
printf("\n Enter second number:");
scanf("%d",&b);
printf("\nAddition = %d",add(&a,&b));
getch();
}
int add(int *x, int *y)
{
return *x+*y;
}

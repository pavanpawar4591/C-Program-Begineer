// Pointer arithmetic
# include<stdio.h>
main()
{
int a=0, b=0;
int *p1, *p2;
clrscr();
printf("\n Enter first number:");
scanf("%d", &a);
printf("\n Enter second number:");
scanf("%d", &b);
p1=&a;
p2=&b;
printf("\n %d is at %u and %d is at %u", a,p1,b,p2);
printf("\n p1-p2= %d " , p1-p2);
printf("\n *p1 + *p2=%d ", *p1 + *p2);
printf("\n *p1*5= %d", *p1*5);
printf("\n*p1/*p2= %d", *p1/ *p2);
printf("\n *p1/5= %d", *p1/5);
printf("\n p1++ =%u",++p1);
getch();
}


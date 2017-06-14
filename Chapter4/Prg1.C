// Use of automatic variables
# include<stdio.h>
void fun1(void);
void fun2(void);
void main()
{
int i=500;
clrscr();
printf("\n %d",i);
fun1();
fun2();
getch();
}
void fun1()
{
int i=100;
printf("\n %d");
}

void fun2()
{
int i=50;
printf("\n %d");
}

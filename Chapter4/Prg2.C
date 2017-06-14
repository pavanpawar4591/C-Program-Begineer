# include<stdio.h>
int max=100;
void fun1(void);
void main()
{
void fun2(void);
printf("\n Original max=%d",max);
max=max-20;
printf("\n max in main()=%d",max);
fun1();
fun2();
getch();
}
void fun1()
{
max=max*2;
printf("\n max in fun1=%d", max);
}
void fun2()
{
max=max+100;
printf("\n max in fun2=%d", max);
}




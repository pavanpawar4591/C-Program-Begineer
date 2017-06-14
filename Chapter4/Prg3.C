# include<stdio.h>
void demo(void);
void main()
{
int i=1;
clrscr();
for (i=1;i<=3;i++)
{
demo();
}
getch();
}
void demo()
{
 static int s=0;
s=s+1;
printf("\n %d",s);
}



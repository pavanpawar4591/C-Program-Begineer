// program to accept angles and check whether it is triangle or not.
# include<stdio.h>
int triangle(int,int,int);
void main()
{
int a1=0,a2=0,a3=0;
int tota=0;
clrscr();
printf("\n Enter first angle:");
scanf("%d", &a1);
printf("\n Enter second angle:");
scanf("%d", &a2);
printf("\n Enter third angle:");
scanf("%d", &a3);
tota=triangle(a1,a2,a3);
if (tota==180)
{
printf("\n This is a triangle");
}
else
{
printf("\n this is not a triangle");
}

getch();
}
int triangle(int x, int y, int z)
{
return x+y+z;
}
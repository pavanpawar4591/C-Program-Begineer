# include<stdio.h>
main()
{
int no1=0, no2=0;
int *pt1, *pt2;
clrscr();
printf("\n Enter first number:");
scanf("%d", &no1);
printf("\n Enter second number:");
scanf("%d", &no2);

pt1=&no1;
pt2=&no2;
printf("\n %d * %d=%d ",*pt1,*pt2, (*pt1)*(*pt2));
getch();
}




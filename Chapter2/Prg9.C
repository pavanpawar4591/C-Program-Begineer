
/* Accept 3 numbers from user and find out the smallest number
scomp3.c */
# include<stdio.h>
void main()
{
int n1=0, n2=0,n3=0;
clrscr();
printf("\n Enter 3 numbers to compare");
scanf("%d %d %d", &n1,&n2,&n3);

if (n1<=n2  && n1<=n3)                  //checking number1 with number 2 and number3.
{
printf("\n The smallest number is %d",n1);
}
else  if (n2<=n1 && n2<=n3)          //checking number2 with number 1 and number3
{
printf("\n The smallest number is %d",n2);
}
else if (n3<=n1 && n3<=n2 )         //checking number3 with number 1 and number2
{
printf("\n The smallest number is %d",n3);
}
else
{
printf("\n All numbers are equal");
}
getch();
}

//progrm to print the square of numbers till the position entered by user.
# include<stdio.h>
void sqr_prn(int);
main()
{
int pos=0;
printf("\nEnter last position");
scanf("%d", &pos);
sqr_prn(pos);
getch();
}
void sqr_prn(int x)
{
int i=1;
for(i=1;i<=x;i++)
{
printf("%d\t", i*i);
}
}


// program to print start pattern using functions.
# include<stdio.h>
void star_prn(int);
main()
{
int row=0;
clrscr();
printf("Enter last row:");
scanf("%d", &row);
star_prn(row);
getch();
}
void star_prn(int r)
{
int i=0,j=0;
for(i=1;i<=r;i++)
{
printf("\n");
for(j=r;j>=i;j--)
{
printf(" * ");
}
}
}

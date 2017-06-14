/* program to display contents of 2d array */
# include<stdio.h>
main()
{
int arr[2][2]={
	       {1,2},
	       {3,4}
	       };
int i=0,j=0;
clrscr();
printf("\n Array contents are:\n");
for(i=0;i<=1;i++)
{
for(j=0;j<=1;j++)
{
printf("arr{%d][%d]=%d\t", i,j,arr[i][j]);
}
printf("\n");
}
getch();
}
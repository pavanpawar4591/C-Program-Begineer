/* Accept & program to display contents of 2d array */
# include<stdio.h>
main()
{
int arr[3][3];
int i=0,j=0;
clrscr();
printf("\n Enter elements are:\n");
for(i=0;i<=1;i++)
{
printf("\n");
for(j=0;j<=1;j++)
{
printf("Enter arr{%d][%d]:\t", i,j);
scanf("%d", &arr[i][j]);
}
}

for(i=0;i<=1;i++)
{
printf("\n");
for(j=0;j<=1;j++)
{
printf("arr{%d][%d]=%d\t", i,j,arr[i][j]);
}
}


getch();
}
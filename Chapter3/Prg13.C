/* program to add and subtract two 3X3 matrices */
# include<stdio.h>
main()
{
int arr1[3][3], arr2[3][3];
int arradd[3][3], arrsub[3][3];
int i=0,j=0;
clrscr();

for(i=0;i<=1;i++)
{
printf("\n");
for(j=0;j<=1;j++)
{
printf("Enter arr{%d][%d]:\t", i,j);
scanf("%d", &arr1[i][j]);
}
}

for(i=0;i<=1;i++)
{
printf("\n");
for(j=0;j<=1;j++)
{
printf("Enter arr{%d][%d]:\t", i,j);
scanf("%d", &arr2[i][j]);
}
}

for(i=0;i<=1;i++)
{
for(j=0;j<=1;j++)
{
arradd[i][j]=arr1[i][j]+arr2[i][j];
arrsub[i][j]=arr1[i][j]-arr2[i][j];
}
}
printf("\n Addition of two matrices\n\n");
for(i=0;i<=1;i++)
{
for(j=0;j<=1;j++)
{
printf("arradd[%d[%d]=%d\t",i,j,arradd[i][j]);
}
printf("\n");
}
printf("\nAddition of two matrices\n\n");
for(i=0;i<=1;i++)
{
for(j=0;j<=1;j++)
{
printf("arradd[%d[%d]=%d\t",i,j,arrsub[i][j]);
}
printf("\n");
}

getch();
}
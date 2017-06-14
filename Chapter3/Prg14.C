# include<stdio.h>
void main()
{
int arr1[2][2], arr2[2][2], arr3[2][2];
int i=0,j=0;
clrscr();
printf("\n Enter elements for first array:");
for(i=0;i<=1;i++)
{
for(j=0;j<=1;j++)
{
printf("\n Enter element");
scanf("%d", &arr1[i][j]);
}
printf("\n");
}
printf("\n Enter elements for second array:");
for(i=0;i<=1;i++)
{
for(j=0;j<=1;j++)
{
printf("\n Enter element");
scanf("%d", &arr2[i][j]);
}
printf("\n");
}
arr3[0][0]=arr1[0][0]*arr2[0][0]+arr1[0][1]*arr2[1][0];
arr3[0][1]=arr1[0][0]*arr2[0][1]+arr1[0][1]*arr2[1][1];
arr3[1][0]=arr1[1][0]*arr2[0][0]+arr1[1][1]*arr2[1][0];
arr3[1][1]=arr1[1][0]*arr2[0][1]+arr1[1][1]*arr2[1][1];

printf("\n Matrix multiplication is:");
for(i=0;i<=1;i++)
{
for(j=0;j<=1;j++)
{
printf("\n%d\t", arr3[i][j]);
}
printf("\n");
}
getch();
}
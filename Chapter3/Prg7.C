//Program to find out smallest and greatest number from array.
# include<stdio.h>
main()
{
int arr[5];
int i=0,small=0, great=0;
clrscr();
for(i=0;i<=4;i++)
{
printf("\n Enter the numbers:");
scanf("%d", &arr[i]);
}
small=arr[0];
great=arr[0];
for (i=0;i<=4;i++)
{
if (arr[i]<=small)
{
small=arr[i];
}

if (arr[i]>=great)
{
great=arr[i];
}
}
printf("\n %d is the smallest number in the list",small);
printf("\n %d is the greatest number in the list",great);
getch();
}




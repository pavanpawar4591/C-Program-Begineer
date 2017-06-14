/* Sorting of an array in ascending order i.e. top to bottom */
# include<stdio.h>
void main()
{
int arr[5];
int i=0, temp=0,j=0;
for(i=0;i<=4;i++)
{
printf("Enter number:");
scanf("%d", &arr[i]);
}
temp=arr[0];
for(j=0;j<=4;j++)
{
for(i=0;i<=4;i++)
{
if (arr[i+1]<arr[i])
{
temp=arr[i];
arr[i]=arr[i+1];
arr[i+1]=temp;
}
}
}
for(i=1;i<=5;i++)
{
printf("\n %d", arr[i]);
}
getch();
}



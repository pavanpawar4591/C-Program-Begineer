// Program to calcualte number of even and odd numbers.
# include<stdio.h>
void evenodd(int []);
void main()
{
int i=0, arr[5];
for (i=0;i<=4;i++)
{
printf("\n Enter numbers:");
scanf("%d", &arr[i]);
}
evenodd(arr);
getch();
}
void evenodd(int a[])
{
int i=0;
int evenno=0, oddno=0;
for(i=0;i<=4;i++)
{
if(a[i]%2==0)
{
evenno++;
}
if(a[i]%2>=1)
{
oddno++;
}
}
printf("Even numbers=%d \t Odd number=%d",evenno,oddno);
}



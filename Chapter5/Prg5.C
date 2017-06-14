// program to accept array elements and print them using pointers.
# include<stdio.h>
void main()
{
int arr[5],i=0;
int *ptr;
clrscr();
for(i=0;i<=4;i++)
{
printf("Enter numbers:");
scanf("%d", &arr[i]);
}
ptr=&arr[0];
i=1;
while (i<=5)
{
printf("\n%d is stored at %u", *ptr, ptr);
ptr++;
i++;
}
getch();
}

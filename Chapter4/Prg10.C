//program to convert given number into  binary equivalent
# include<stdio.h>
void main()
{
void bin_conv(void);
clrscr();
bin_conv();
getch();
}

void bin_conv()
{
int number=0, rem=0,arr[5];
int i=0, j=0;
printf("\n Enter number:");
scanf("%d", &number);
printf("\n Binaray equvivalent of %d=",number);

while (number!=0)
{
rem=number%2;
arr[i]=rem;
i++;
number=number/2;
}
i--;
for(j=i;j>=0;j--)
{
printf("%d",arr[j]);
}
}





# include<stdio.h>
void main()
{
int number[5];
int i=0,sum=0;
float avg=1.0;
clrscr();
for(i=0;i<=4;i++)
{
printf("\n Enter number:");
scanf("%d", &number[i]);
sum=sum+number[i];                       
}
avg=sum/5;                                       		// Calculating average out of the loop.
printf("\n Sum of array elements= %d", sum); 	 // Printing sum
printf("\n Average of array elements=%f",avg); 	// printing average
getch();
}

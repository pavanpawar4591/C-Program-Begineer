/* program to accept 5 elements store them in an array and display result */
 # include<stdio.h>
 void main()
{
int number[5];							 // Declaring integer array number of 5 elements.
int i=0;		// i is used for repetition as well as for accessing locations.
clrscr();

for(i=0;i<=4;i++)
{
printf("\n Enter number:");
scanf("%d", &number[i]);
}
for(i=0;i<=4;i++)							// for loop to print the values from array.
{
printf("\n %d is stored at %d location of array", number[i], i);
}
getch();
}

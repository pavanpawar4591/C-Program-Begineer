/* program to print the contents of the array using for loop */
# include <stdio.h>
void main()
{
int arr[5]={10,15,78,90,100};	// Declaration and initialization of array
int i=0;
clrscr();

for(i=0;i<=4;i++)   	// for loop is used to count the location from 0 to 4
{
printf("\n %d",arr[i]);	 // printing values of ith location of an array
}
getch();
}



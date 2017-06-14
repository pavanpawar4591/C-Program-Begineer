/* to print the table of numbers from 2 to 12
donest.c  */
# include<stdio.h>
void main()
{
int no=1, i=1;  // declaring number and i as 1.
clrscr();
do
{
no++;         // number is incremented
do
{
printf("%d\t", no*i); // printing table of a number
i++;
}while (i<=10);      // multiplying the number from 1 to 10
i=1;
printf("\n");       	 // printing new line
}while(no<12);       //printing table of a number from 2 to 12.
getch();
}

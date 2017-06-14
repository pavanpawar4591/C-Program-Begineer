/* program to print the table of number using do while 
dotable.c */

# include<stdio.h>
void main()
{
int no=0;
int i=1;
clrscr();
printf("\n Enter number:");
scanf("%d", &no);
do                       // beginning of the do loop
{
printf("%d\t", no*i); // action to be performed
i++;                 // value of  i is incremented to print the table of a number
}while(i<=10);
getch();
}

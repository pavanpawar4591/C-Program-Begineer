/* Program to accept 3 nos. add them and find out average.
    avg.c                                  */
# include<stdio.h>                           		     // including header file

void main()
{
int no1=0, no2=0,no3=0, total;                 	  // variables declaration and initialization
float average;
clrscr();                                                            // function to clear the output screen
printf("Enter 3 numbers:");
scanf("%d %d %d", &no1, &no2,&no3);    // accepting 3 numbers using single scanf.
total=no1+no2+no3;
average=total/3;                                             // Calculating average
printf("\n The total is  %d and average is %f", total,average);        // Printing result
getch();                                                             // function for the quick output screen
}

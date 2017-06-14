/* Program to calculate the interest amount when interest is 11 % per year. 
     intcal.c                                  */
# include<stdio.h>                           		     // including header file
# define int_rate 11
void main()
{
float principle , int_amt ;                 	  // variables are initially 1.0
int period;
clrscr();                                                            // function to clear the output screen
printf("Enter Principle amount and period(years):");
scanf("%f%d ", &principle ,&period );         // accepting principle and period
int_amt=  (principle * int_rate/100)* period;   // formula
printf("\n The Interest amount is  %f", int_amt);  // Printing result
getch();              // / function for the quick output screen
}


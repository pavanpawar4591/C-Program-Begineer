/* Program to convert Fahrenheit temperature to Celsius. 
	 tempconv.c                                  */
//# include<stdio.h>                           		            // including header file

 void main()
{
float ftemp=1.0 , celtemp=1.0 ;                 	         // variables are initially 1.0
clrscr();                                                                   // function to clear the output screen
printf("Enter temperature in Fahrenheit:");
scanf("%f", &ftemp );                                           // accepting temperature in Fahrenheit
celtemp= (ftemp-32 )/1.8;                                      // Conversion formula
printf("\n The temperature in Celsius is  %f", celtemp);          // Printing result
getch();                                                             // function for the quick output screen

}

/* Program to find out the area of a circle 
    circle.c                                  */
# include<stdio.h>                           		     // including header file
  const  float pi= 3.14;
main()
{
float area=0.0 , radius=1.0;                  	  // variable area is initially 1.0
clrscr();                                                           // function to clear the output screen
printf("Enter radius:");
scanf("%f",&radius );                                     // accepting radius from user
area= pi*radius* radius;                                   // calculation for area
printf("\n The area of circle is %f", area);     // Printing result
getch();                                                           // function for the quick output screen
}

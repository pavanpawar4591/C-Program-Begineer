/* Program to find out the area and perimeter of rectangle.
rectangle.c                                         */

# include<stdio.h>
void main()
{
float length=1.0, breadth=1.0;
float area=1.0, perim=0.0;
printf("Enter length and breadth");
scanf("%f %f", &length, &breadth);
area=length*breadth;
perim=(2*length) +(2*breadth);
printf("\n Area of rectangle is %f and perimeter is %f", area, perim);
getch();
}

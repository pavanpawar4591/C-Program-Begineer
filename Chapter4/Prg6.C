//find area of circle using function
# include <stdio.h>
const float pi=3.14;
void area(void);
void main()
{
clrscr();
area();
getch();
}
void area(void)
{
float radius=1.0;
printf("\n Enter area of radius :");
scanf("%f", &radius);
printf("\n Area of circle is  %f", pi*radius*radius);
}
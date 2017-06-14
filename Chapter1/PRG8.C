/* Program to find out the greater of 2 numbers..
max.c                                        */

# include<stdio.h>
void main()
{
int no1=0, no2=0, max=0;
printf("Enter two numbers");
scanf("%d %d", &no1, &no2);
max= (no1>no2?no1:no2);                                   // use of ternary operator ‘?:’ to find out the greater number.
printf("\n The greater number is %d", max);
getch();
}


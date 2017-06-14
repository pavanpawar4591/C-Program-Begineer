/* Program to convert rupees into paisa
convertl.c                                        */
# include<stdio.h>
void main()
{
float rupees=1.0;
double paisa=1.0;
clrscr();
printf("\n Enter rupees: ");
scanf("%f", &rupees);
paisa=rupees*100;
printf("\n Rupees=%f  and Paisa=%lf", rupees, paisa );               //Display result.
getch();
}

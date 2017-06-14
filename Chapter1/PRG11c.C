/* To display entered numbers with right justification and left justification
justify.c */
# include<stdio.h>
void main()
{
float  num=0;
clrscr();
printf("Enter number:");
scanf("%f", &num);
printf("The number(R): %f",num);
printf("\nThe number(L):%-f",num);
getch();
}

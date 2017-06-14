/* Using while write a program to calculate factorial of a number.
wfact.c */
# include<stdio.h>
void main()
{
long int no=1, fact=1 , i=1;
clrscr();
printf("\n Enter number:");
scanf("%ld", &no);
while (i<=no)               // while i becomes the number.
{
fact=fact*i;                   // factorial is its previous value into i
i++;                                // i  is  incremented by one
}
printf("\n Factorial of a number is %ld", fact);   // Printing final value of factorial
getch();
}

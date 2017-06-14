/* program to print multiples of 7 from 1 to 50. 
do7mul.c */

# include<stdio.h>
void main()
{
int i=1;
do                                        // beginning of the do loop
{
if (i%7==0)                        // finding multiple of 7   
{
printf("\n %d", i);               // printing only multiples of 7
}
i++;
}while(i<=50);

getch();
}

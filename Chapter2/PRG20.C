 /* accept 5 numbers from user and sum them, if user enters 100 exit the program */
# include<stdio.h>
void main()
{
int no=0, i=1,sum=0;
clrscr();
while(i<=5)                     // condition for accepting five numbers i.e. till I becomes 5
{
printf("\n Enter number:");
scanf("%d", &no);
if (no==100)           // if accepted number is 100 .
{
break;                      // the control gets break and it comes out of loop
}
sum=sum + no;
i++;
}
printf("The sum of  is %d", sum);   // the final sum of all the numbers.
getch();
}

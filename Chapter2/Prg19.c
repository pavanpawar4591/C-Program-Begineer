/* program to count number of digits and print the reverse of a number
revno.c */

# include<stdio.h>
void main()
{
int no=0, rem=0,cnt=0;
clrscr();

printf("Enter number:");
scanf("%d", &no);
printf("\n Reverse of a number");                  // Printing message
while (no!=0)                          // While number does not become zero
{
rem=no%10;                           // rem is remainder of no/10 due to this we get last digit.
cnt++;                                     // when last digit is received the counter counts it
printf("%d",rem);                   // printing the remainder i.e. last digit.
no=no/10;                               // dividing the last digits to get one by digits
}
printf("\n The number of digits are %d", cnt);
getch();
}

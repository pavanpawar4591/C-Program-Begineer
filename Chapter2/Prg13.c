/* displaying menu to do arithmetical operations
arithop.c  */
# include<stdio.h>
void main()
{
int no1=0,no2=0, choice=0;
clrscr();
printf("\n 1.Addition");
printf("\n 2.Subtraction");
printf("\n 3.Multiplication");
printf("\n 4.Division");
printf("\n\n\n Enter choice");
scanf("%d", &choice);
printf("Enter two numbers:");
scanf("%d %d", &no1, &no2);
switch (choice)                                                        // passing choice to check its values
{
case 1:                                                                     // Checks if 1 is entered as a choice
printf("\n Addition is %d", no1+no2);
break;                                                                      // case will get break if executed
case 2:
printf("\n Subtraction is %d", no1-no2);
break;
case 3:
printf("\n Multiplication is %d", no1*no2);
break;
case 4:
printf("\n Division is %d", no1/no2);
break;
default:
printf("\n Invalid value entered");                          // if value other than 1,2,3 or 4 is entered
break;
}
getch();
}

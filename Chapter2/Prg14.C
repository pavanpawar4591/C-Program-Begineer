/* Program to accept the type of travel and display fare for that type.
 Fare.c*/

# include<stdio.h>
main()
{
char type;
printf("\n\t Traveling details:");
printf("\n Bus (b)");
printf("\n Train(t)");
printf("\n Private car(c)");
printf("\n By air(a)");
printf("\n Enter choice b/t/c/a");
scanf("%c", &type);
switch(type)                             // Accepted value is passed to switch statement
{
case 'b':
printf("\n Bus fare is 450 Rs");
break;
case 't':
printf("\n Train fare is 375 Rs");
break;
case 'c':
printf("\n Private car  fare is 800 Rs");
break;
case 'a':
printf("\n Bus fair is 1200 Rs");
break;
default:                              // If choice is entered other than the given cases
printf("\n Invalid choice");
break;
}
getch();
}

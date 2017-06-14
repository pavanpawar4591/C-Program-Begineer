/* Accept first character of designation form user and display the post or designation.
desig.c              */
# include<stdio.h>
void main()
{
char code; 
clrscr();
printf("\n\t Designation\t character");
printf("\n\t Manager\t -m");
printf("\n\t supervisor\t-s");
printf("\n\t Clerk\t -c");
printf("\n\t Worker\t -w");
printf("\n Enter designation code:" );
scanf("%c", &code);
if (code=='m')                                              // checking for manager designation
{
printf("\n The designation is manager");
}
else if (code=='s')			    // else checking for supervisor designation
{
printf("\n The designation is supervisor");
}
else if (code=='c')                                    // else checking for clerk designation
{
printf("\n The designation is clerk");
}
else if (code=='w')                                  // else checking for worker designation
{
printf("\n The designation is worker");
}
else			                         //else the character entered is invalid
{
printf("\n Invalid character entered");
}
getch();
}

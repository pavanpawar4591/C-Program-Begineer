/* Accept characters from the user, if user enters ‘x ‘ stop accepting characters 
wchar.c */
# include<stdio.h>
void main()
{
char code='a';
clrscr();
while (code!='x')
{
printf("\nEnter character (to exit type x):");
code= getch();
printf("\n You have entered %c", code);
}
printf("\nYou have exited");
getch();
}

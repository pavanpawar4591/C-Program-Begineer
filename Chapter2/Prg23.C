
/* program for controlling flow of data using goto
goto */
 # include<stdio.h>
main()
{
int no;
clrscr();
accept:                                 // label given as a accept
printf("Enter number");
scanf("%d",&no);
if (no==0) goto accept;    // if number is zero then using goto it goes to accept
getch();
}

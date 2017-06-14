//Program to accept string from user and display message.
# include<stdio.h>
void main()
{
char name[15];
clrscr();
printf("\nEnter name:");
scanf("%s", name);
printf("Welcome %s you are running C program", name);
getch();
}



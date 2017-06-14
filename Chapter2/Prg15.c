/* Program to display number from 1 to 10 and display its spelling
spell.c */
# include<stdio.h>
void main()
{
int no=0;
clrscr();
printf("Enter number 1-10");
scanf("%d", &no);
switch(no)
{
case 1:
printf("\n One");
break;
case 2:
printf("\n Two");
break;
case 3:
printf("\n Three");
break;
case 4:
printf("\n Four");
break;
case 5:
printf("\n Five");
break;
case 6:
printf("\n Six");
break;
case 7:
printf("\n Seven");
break;
case 8:
printf("\n Eight");
break;
case 9:
printf("\n Nine");
break;
case 10:
printf("\n Ten");
break;
default:
printf("\n Invalid number");
break;
}
getch();
}

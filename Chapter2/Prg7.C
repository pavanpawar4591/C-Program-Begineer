/* display menu for operation and accept choice number from user
dispmenu.c  */
# include<stdio.h>
void main()
{
int num=0, choice=0; 
clrscr();
printf("\n\t 1.Square");
printf("\n\t 2. Cube");
printf("\n\t 3. Octal");
printf("\n\t 4.Hexadecimal");
printf("\n Enter number 1/2/3/4 for your choice");
scanf("%d", &choice);
printf("\n Enter number:" );
scanf("%d", &num);
if (choice==1) // checking for square of number operation
{
printf("\n The square of a number is %d", num*num);
}
else if (choice==2)			    // else checking for cube of a number operation
{
printf("\n The cube is %d", num*num*num);
}
else if (choice==3)                                    // else checking for printing equivalent octal number
{
printf("\n Equivalent octal of %d is %o",num ,num);
}
else if (choice==4)                         // else checking for printing equivalent hexadecimal number
{
printf("\n Equivalent hexadecimal of %d is %x ",num, num);
}
else			                         //else the character entered is invalid
{
printf("\n Choice is Invalid ");
}
getch();
}

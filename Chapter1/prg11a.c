/* program to display hexadecimal, decimal and octal formats
   of entered number.    numform.c  */
# include<stdio.h>
void main()
{
int num=0;
clrscr();
printf("Enter number:");
scanf("%d", &num);
printf("\nHexadecimal number=%x \t Octal number=%o\t Decimal number=%d",num,num,num);
getch();
}

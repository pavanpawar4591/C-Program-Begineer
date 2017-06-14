// program to demonstrate the use of pointers
# include<stdio.h>
void main()
{
int number=0;
int *ptr;
clrscr();
printf("\n Enter number:");
scanf("%d", &number);
ptr=&number;
printf("\n %d is stored at %u",number,ptr);
getch();
}


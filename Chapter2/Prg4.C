/* Accept age and display the person is adult or not. age.c              */
# include<stdio.h>
void main()
{
int age=0;
clrscr();
printf("Enter age :");
scanf("%d", &age);
if(age>=18)			// if age is > or = 18 then person is adult
{
printf("\n The person is adult");
}
else
{
printf("\n The person is not adult");               //  if num < 18  then it is negative
}
getch();
}

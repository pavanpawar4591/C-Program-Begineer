// Program to display the contents of the string
# include<stdio.h>
void main()
{
char str[20]="Welcome to Tech-Max";
int i=0;
clrscr();
printf("\n Entered string is %s",str);
printf("\n Values stored at each location are:\n");
for(i=0;i<=19;i++)
{
printf("str[%d]=%c\n", i,str[i]);
}
getch();
}

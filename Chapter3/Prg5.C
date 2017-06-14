// Program to convert characters
# include<stdio.h>
void main()
{
char grade[5];
int i=0;
for(i=0;i<=4;i++)
{
printf("\nEnter character:");
grade[i]=getche();
grade[i]=grade[i] -32;
}
for (i=0;i<=4;i++)
{
printf("\nThe converted character are  %c",grade[i]);
}
getch();
}


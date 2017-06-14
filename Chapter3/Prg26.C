//program to accept names of 5 students and display them.
# include<stdio.h>
void main()
{
int i=0;
char fname[5][10];
clrscr();
for(i=0;i<=4;i++)
{
printf("\n Enter string:");
scanf("%s", fname[i]);
}
printf("\n List of students");
for (i=0;i<=4;i++)
{
printf("\n %s", fname[i]);
}
getch();
}



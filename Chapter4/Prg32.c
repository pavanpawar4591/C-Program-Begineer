// program to find highest student given in array of structures.
# include<stdio.h>
void main()
{
struct stud
{
int rollno;
char name[10];
int percent;
}s[3];
int i=0;
for(i=0;i<=2;i++)
{
printf("\n Enter rollno, name and percent:");
scanf("%d %s %d",&s[i].rollno, s[i].name, &s[i].percent);
}
for(i=0;i<=2;i++)
{
printf("\n rollno=%d name=%s  percent=%d",s[i].rollno, s[i].name, s[i].percent);
}
getch();
}
/* Program to store the details of employee and find out the
 highest salary. */
# include<stdio.h>
void main()
{
struct emp
{
int empno;
char name[10];
int salary;
}e[3];
int i=0, temp=0;
clrscr();
for(i=0;i<=2;i++)
{
printf("\n Enter employee number:");
scanf("%d",&e[i].empno);
printf("\n Enter employee name:");
scanf("%s",e[i].name);
printf("\n Enter employee salary");
scanf("%d",&e[i].salary);
}
for(i=0;i<=2;i++)
{
printf("\nEmpno-%d\tEmp name-%s \t emp salary=%d", e[i].empno, e[i].name, e[i].salary);
if (temp<e[i].salary)
{
temp=e[i].salary;
}
}
printf("\n The hightest salary=%d",temp);
getch();
}



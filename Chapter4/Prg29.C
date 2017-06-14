//Program to demonstrate the initialization of structures.
# include <stdio.h>
void main()
{
struct emp
{
int emp_no;
char emp_name[10];
float emp_sal;
};
struct emp e= {101,"Ashish", 5250.50};
printf("\n emp_no= %d",e.emp_no);
printf("\n emp_name=%s",e.emp_name);
printf("\n emp_sal=%f", e.emp_sal);
getch();
}


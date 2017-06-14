/* To demonstrate all possible format specefiers
formspec.c  */
# include<stdio.h>
void main()
{
int ac_no;
float int_amt=1.0;
float interest=1;
char ac_type;
char name[20];
float deposit=1.0;
clrscr();
printf("\n Enter account number & members name");
scanf("%d  %s",&ac_no,name);
printf("Enter Deposit and rate of interest");
scanf("%f %f", &deposit, &interest);
int_amt=(deposit*interest)/100;
printf("A/C No:%d \t Name-%s \t Deposit=%f\t Interest=%f ",ac_no, name, deposit,int_amt);
getch();
}

/*program to create a structure to store the account details of the bank.
include account number,member name, balance and account type i.e. saving, current,
etc. If balance id < 2000 then display message "Minimum Balance". */

# include<stdio.h>
void main()
{
struct bank_acno
{
int acno;
char mem_name[10];
float balance;
char ac_ty[10];
}b_acc;
clrscr();
printf("\n Enter Bank Account details\n");
printf("\n Enter Bank Account Number:");
scanf("%d", &b_acc.acno);
printf("\n Enter Account holder's Number:");
scanf("%s", b_acc.mem_name);
printf("\n Enter balance");
scanf("%f",&b_acc.balance);
printf("\n Enter Account type:");
scanf("%s", b_acc.ac_ty);
printf("\n\n Bank Account details\n");
printf("\n Bank Account Number=%d", b_acc.acno);
printf("\n Account holder's Name=%s", b_acc.mem_name);
printf("\n Account type=%s",b_acc.ac_ty);
printf("\n Balance=%f",b_acc.balance);
if (b_acc.balance<2000)
{
printf("\n Minimum Balance in your Account!!!!!!!!!!!!!!!!!!!!!1");
}
getch();
}


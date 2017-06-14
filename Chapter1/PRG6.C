/*  Calculate total sales and & commission for the sales man as 7% of sales
Sales.c */
# include<stdio.h>
const int comm=7;
void main()
{
float tot_sale=1.0, comm_amt=1.0, rate=1.0;
int qty=1;
clrscr();
printf("Enter quantity and item rate:");
scanf("%d %f ", &qty, &rate);
tot_sale=qty*rate;
comm_amt=tot_sale* comm/100;
printf("\n quantity=%d \t rate=%f \n Total sales=%f commission =%f", qty, rate, tot_sale,comm_amt);
getch();
}


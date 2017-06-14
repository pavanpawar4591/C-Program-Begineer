// program to calculate rate of intrest yearly as 21 %
# include<stdio.h>
void int_cal(void);
void main(void)
{
int_cal();
getch();
}
void int_cal()
{
float roi=21, interest=1.0, prin_amt=1.0;
printf("Enter principle amount:");
scanf("%f", &prin_amt);
interest=prin_amt*roi/100;
printf("\n Yearly interest=%f", interest);
}



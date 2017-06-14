/* Program to calculate employee salary
salcal.c                                        */
# include<stdio.h>
void main()
{
int basic=1;
float hra=1.0, da=1.0, ta=1.0, gsal=0.0, netsal=0.0,pt=1.0;
clrscr();
printf("\n Enter basic salary");
scanf("%d", &basic);             				 // Accepting basic salary from user.
hra=(50*basic)/100;          				// calculating hra
da=(25*basic)/100;               	                               		//calculating da
ta=(5*basic)/100;                                               	               //calculating ta
gsal=basic +hra +da +ta;                                                        // Gross salary calculation
netsal=gsal-pt;                                                                       // Calculating net salary
printf("\n HRA=%f \t DA=%f \t TA=%f ", hra, da, ta);               //Display result.
printf("\n Gross salary=%f\t Net Salary= %f", gsal, netsal);       //Display result.
getch();
}

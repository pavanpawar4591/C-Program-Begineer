/* calculation of income tax.
it.c  */
# include<stdio.h>
void main()
{
char code;
long int income=1;
clrscr();
printf("\n Enter Gender m/f: ");
scanf("%c", & code);
printf("\n Enter annual income");
scanf("%ld", &income);
if (code=='f')                                                            //If the person is female
{
if(income>135000)                                                //Checking for taxable income
{
printf("%d is the income tax on %d income for female",((income-13500)*10/100));
}
else                                            //Tax is not applicable
{
printf("No income tax for female " );
}
}
else                                              //else of outer most if
{
if(code=='m')                              //If the person is male
{
if (income>=100000)                  //Checking for taxable income
{
printf("%d is the income tax on %ld income for male" ,((income-100000) *10/100),income);
}
else                              //Tax is not applicable
{
printf("No income tax for Male " );
}                     			 //closing of else
}                  	   		                          // closing of if
}                     			                                                       //closing of outer else
getch();
}

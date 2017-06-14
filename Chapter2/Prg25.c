/* program to add the numbers till it becomes 100. 
doaddno.c */

# include<stdio.h>
void main()
{
int no=0;
int sum=0;
do                                        // beginning of the do loop
{
printf("\n Enter number:");
scanf("%d", &no);
sum=sum+ no;
}while(sum<100);                //Test condition is checked at the end of loop.
printf("The sum is %d",sum);
getch();
}

/* Comparison of two numbers.
comp2.c                 */
# include<stdio.h>
void main()
{
int num1=0, num2=0;
printf("Enter two numbers:");
scanf("%d %d", &num1, &num2);
if(num1>num2)                                                       //Checking condition if num1>num2
{
printf("\n The greater number is: %d", num1);      //display number num1 is  greater  (TRUE)
   }
else
{
printf("\n The greater number is: %d", num2);    //display number num2 is  greater(FALSE)
      }
getch();
}

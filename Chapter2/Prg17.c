/* printing 1 to 10 numbers using while loop 
    Wh1to10.c*/
# include<stdio.h>
void main()
{
int i=1;                 // declaring variable i =1 as we would like to print numbers starting from 1

while (i<=10)
{
printf("\n %d ",i); //printing value of i
i++;                      // value of i will be increased by 1.
}
getch();
}

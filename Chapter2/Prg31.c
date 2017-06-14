/* Display even numbers from 1 to 100.
sum100.c */
# include<stdio.h>
void main()
{
int i=0, sum=0; 
for(i=1;i<=100; i++)  
{                                 
sum=sum+i;                       
}
printf("sum of 1-100 numbers= %d",sum);
getch();

}

# include<stdio.h>
void main()
{
char city[5][10]= {
		  "Mumbai",
		  "Pune",
		  "Nasik",
		  "auragabad",
		  "Kolhapur"};
int i=0;
clrscr();
for(i=0;i<=4;i++)
{
printf("\n %s", city[i]);
}
getch();
}



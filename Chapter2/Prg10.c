
/* Accept marks in percentage from user and display result.
result.c */
# include<stdio.h>
void main()
{
int marks;
clrscr();
printf("\n Enter marks(percentage)");
scanf("%d", &marks);
if (marks>0  && marks<50)                                                   //checking fail condition
{
printf("\n The candidate is fail");
}				                            	     //checking pass class condition
else if (marks>=50 && marks<=54)
{
printf("\n The candidate is passed in pass class");
}
else if(marks>=55 && marks<=59)                                       //checking second class condition
{
printf("\n The candidate is passed in second class");
}
else if (marks>=60 && marks<=69)                                      //checking First class condition
{
printf("\n The candidate is passed in first class");
}
else if (marks>=70 && marks<=79)                                       //checking distinction condition
{
printf("\n The candidate is passed in distinction");
}
else if (marks>=80 && marks<=100)                                    //checking Merit condition
{
printf("\n The candidate is passed in Merit");
}
else
{
printf("\n Entered marks are invalid");                                 //checking for wrong input

}
getch();
}

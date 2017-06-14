// To display the case of alphabet in words.
void charcase(char);
# include<stdio.h>
void main()
{
char code;
clrscr();
printf("\n Enter character");
scanf("%c", &code);
charcase(code);
getch();
}
void charcase(char x)
{
if(x>=65 && x<=91)
{
printf("\n %c is in upper case",x);
}
else if(x>=97 && x<=122)
{
printf("\n %c is in lower case",x);
}
else
{
printf("\n Entered value is not character");
}
}



// Program to print reverse of the string  //
# include<stdio.h>
void main()
{
int i=0,j=1;
char str[10];
clrscr();
printf("\n Enter string:");
scanf("%s",str);
while (str[i]!=NULL)
{
if (str[i]>=97 && str[i]<=122)
{
str[i]=str[i]-32;
}
else if(str[i]>=65 && str[i]<=96)
{
str[i]=str[i]+32;
}
i++;
}
printf("\n The upper case string is %s", str);


getch();
}

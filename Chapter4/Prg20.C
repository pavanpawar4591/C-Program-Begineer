// calculate the string lenghth using function.
# include<stdio.h>
int str_len();
void main()
{
int length=0;
clrscr();
length=str_len();
printf("\n string length= %d", length);
getch();
}
int str_len()
{
int i=0;
char str[10];
printf("\n Enter string");
scanf("%s", str);
while (str[i]!=NULL)
{
i++;
}
return i;
}



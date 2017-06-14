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
i++;
}
printf("\n the reverse of the string is");
for (j=i;j>=0;j--)
{
printf("%c",str[j]);
}

getch();
}

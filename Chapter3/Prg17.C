// Program to calculate the string length //
# include<stdio.h>
void main()
{
int i=0;
char str[10];
printf("\n Enter string:");
scanf("%s",str);
while (str[i]!=NULL)
{
i++;
}
printf("\String length of %s=%d",str,i);
getch();
}

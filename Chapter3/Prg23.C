
# include<stdio.h>
void main()
{
int i=0, j=0;
char str[10];
int flag=0;
clrscr();
printf("Enter string");
scanf("%s", str);
while(str[i]!=NULL)
{
i++;
}
i--;
while (j!=i)
{
if (str[i]==str[j])
{
flag=1;
}
else
{
flag=2;
break;
}
j++;
i--;
}
if (flag==1)
{
printf("%s is palindrom",str);
}
else
{
printf("%s is not palindrom",str);
}
getch();
}
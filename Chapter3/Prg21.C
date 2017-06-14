# include<stdio.h>
main()
{
char str1[10], str2[10];
int i=0, flag=0;
printf("\n Enter first string:");
scanf("%s",str1);
printf("\n Enter second string:");
scanf("%s", str2);
for (i=0;i<=9;i++)
{
if (str1[i]==str2[i])
{
flag=1;
}
else
{
flag=2;
break;
}
}
if (flag==1)
{
printf("\n %s and %s are equal", str1,str2);
}
else
{
printf("\n %s and %s are not equal", str1,str2);
}
getch();
}


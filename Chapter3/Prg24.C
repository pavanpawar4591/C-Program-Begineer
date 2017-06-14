// Concatingating two strings in one string
# include<stdio.h>
main()
{
char str1[10], str2[10], str3[20];
int i=0,j=0;
clrscr();
printf("Enter first string:");
scanf("%s", str1);
printf("\n Enter second string:");
scanf("%s", str2);

while(str1[i]!='\0')
{
str3[i]=str1[i];
i++;
}

while(str2[j]!='\0')
{
str3[i]=str2[j];
j++;
i++;
}
printf("The concatinated string is %s", str3);
getch();
}

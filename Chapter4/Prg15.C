// program to write a function which will exchange two strings
# include<stdio.h>
void exchange(char[], char[]);
void main()
{
char str1[10],str2[10];
clrscr();
printf("\n Enter first string");
scanf("%s",str1);
printf("\n Enter second string");
scanf("%s",str2);
printf("\nBefore exchange first string= %s & second string=%s", str1, str2);
exchange(str1,str2);
getch();
}
void exchange(char s1[], char s2[])
{
char temp[10];
int i=0;
for(i=1;i<=9;i++)
{
temp[i]=s1[i];
}
for(i=1;i<=9;i++)
{
s1[i]=s2[i];
}
for(i=1;i<=9;i++)
{
s2[i]=temp[i];
}
printf("\nAfter exchange first string= %s & second string=%s", s1, s2);
}

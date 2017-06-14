# include<stdio.h>
main()
{
char str1[10], str2[10];
int i=0;
clrscr();
printf("\n Enter first string:");
scanf("%s", str1);
printf("\nEnter second string:");
scanf("%s",str2);
printf("\nBefore copying:");
printf("\nFirst string= %s Second string=%s",str1,str2);

for(i=0;i<=9;i++)
{
str2[i]=str1[i];
}
printf("\nAfter copying");
printf("\nFirst string= %s Second string=%s",str1,str2);
getch();
}


# include<stdio.h>
void main()
{
char str[10];
int i=0, cnt1=0, cnt2=0;
clrscr();
printf("Enter string:");
scanf("%s",str);
while(str[i]!=NULL)
{
if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
{
cnt1++;
}
else
{
cnt2++;
}
i++;
}
printf("\n The string entered is %s", str);
printf("\n Vowels=%d and consonants=%d", cnt1, cnt2);
getch();
}
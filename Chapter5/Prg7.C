//program to find out string length using pointer and function.

# include<stdio.h>
int leng(char *);
void main()
{
char *ptr, str[10];
clrscr();
printf("\n Enter string:");
scanf("%s", str);
ptr=&str[0];
printf("\n Length of string=%d",leng(ptr));
getch();
}
int leng(char *p)
{
int cnt=0;
while (*p!=NULL)
{
cnt++;
p++;
}
return cnt;
}


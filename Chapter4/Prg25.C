// program to find out sub string
int substr(int,int,char[]);
void main()
{
char str[10],n=0;
int fpos=0, lpos=0;
clrscr();
printf("\n Enter string:");
scanf("%s", str);
printf("\n Enter first and last position:");
scanf("%d %d", &fpos, &lpos);
n=substr(fpos,lpos,str);
printf("\n Number of characters displayed=%d", n);
getch();
}
int substr(int f, int l, char st[])
{
int i=0;
f--;
l--;
for(i=f;i<=l;i++)
{
printf("%c",st[i]);
}
l++;
return l-f;
}




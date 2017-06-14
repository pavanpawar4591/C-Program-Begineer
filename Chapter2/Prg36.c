/* print the  above pattern
forpat2.c              */
# include<stdio.h>
void main()
{
int i=0, j=0, pos=0,cnt=1;
clrscr();
printf("Enter position/ number of rows");
scanf("%d", &pos);
for(i=1;i<=pos ; i++)
{
printf("\n");

for(j=1;j<=i;j++)
{
printf("%d",cnt );
cnt++;
}
}
getch();
}

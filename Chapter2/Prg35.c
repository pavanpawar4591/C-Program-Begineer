/* print the above pattern
forpat1.c              */
# include<stdio.h>
void main()
{
int i=0, j=0, pos=0;
clrscr();
printf("Enter position/ number of rows");
scanf("%d", &pos);
for(i=1;i<=pos ; i++)
{
for(j=1;j<=i;j++)
{
printf("%d",i );
}
printf("\n");
}
getch();
}

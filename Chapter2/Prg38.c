/* program to demonstrate use of continue statement 
contdemo.c */
void main()
{
int i=0,j=0;
for(i=1;i<=2;i++)
{
for(j=1;j<=2;j++)
{
if(i==j)
continue;
printf("\n %d %d", i,j);
}
}
getch();
}

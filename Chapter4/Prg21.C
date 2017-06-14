// program to find out greates number from given matrix using function.
# include<stdio.h>
int matgreat();
void main()
{
clrscr();
printf("\n Greatest number in matrix=%d", matgreat());
getch();
}
int matgreat()
{
int i=0,j=0,mat[2][2],gno=0;
for(i=0;i<=1;i++)
{
printf("\n");
for(j=0;j<=1;j++)
{
printf("Enter[%d][%d]element:",i,j);
scanf("%d", &mat[i][j]);
}
}
for(i=0;i<=1;i++)
{
for(j=0;j<=1;j++)
{
if (gno<mat[i][j])
{
gno=mat[i][j];
}
}
}
return gno;
}



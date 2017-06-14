/* Print the series of factorial numbers e.g. 1, 2, 6, 2 4,120, 720 …..n
factser1.c              */  

# include<stdio.h>
void main()
{
int i=0, j=0, pos=0;
long int fact=1;
clrscr();
printf("Enter last position");
scanf("%d", &pos);
for(i=1;i<=pos ; i++)
{
printf("\t");
for(j=1;j<=i;j++)
{
fact=fact*j;
}
printf("%ld" ,fact );
fact=1;
}
getch();
}

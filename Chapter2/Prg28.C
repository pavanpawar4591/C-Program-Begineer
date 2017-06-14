/* Accept college name and print it twenty times
colprint.c */
# include<stdio.h>
void main()
{
char col_name[30];
int i;
printf("\n Enter college name:");
scanf("%s", col_name);
for (i=1;i<=20;i++)
{
printf("\n %s", col_name);
}
getch();
}

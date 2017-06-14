/*printing series of 2,6,12,20,30,42 using for loop. Accept position from user.
fseries .c */
# include<stdio.h>
void main()
{
int i=0, pos=0;
clrscr();
printf("\n Enter last position ");
scanf("%d", &pos);
for(i=1;i<=pos; i++)  // The loop starts with 1 and iterates till the position entered by user
{
printf("\t %d",(i*i) + i);
}
getch();
}

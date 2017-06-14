/* printing multiple of 5 from 1 to position entered by user.
formul5.c */

# include<stdio.h>
void main()
{
int i=0, pos=0;
printf("\n Enter last position ");  
scanf("%d", &pos);
for(i=5;i<=pos; i+=5)   // The loop starts and  increment by 5 and runs till the pos
{
printf("\t %d",i);
}
getch();
}

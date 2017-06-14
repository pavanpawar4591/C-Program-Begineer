/* printing Fibonacci using while loop
wfibo.c */
 # include<stdio.h>
void main()
{
int fno=0, sno=1, tno=0,pos=0,i=1;
clrscr();
printf("\n Enter last position for Fibonacci:");
scanf("%d",&pos);
printf("\n %d \t %d", fno, sno) ;     // printing initial values 0 and 1
while (i<=pos)
{
tno=fno+sno;                                  // third number is first number + second number
printf("\t %d", tno);                       // printing third number
fno=sno;                                 // for next addition second number will be treated as first number
sno=tno;                                 //recent third number will be treated as second number.
i++;                                         // i will increment by 1.  when i>pos then loop gets break.
}
getch();
}
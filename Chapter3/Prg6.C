# include<stdio.h>
void main()
{
float arr1[5]={17.2, 15.90, 17.22, 100.76, 33.77};
float arr2[5]={0.0,0.0,0.0,0.0,0.0};
int i=0;
clrscr();
printf("\n Before copy action");
printf("\n arr1\t\tarr2\n");
for (i=0;i<=4;i++)
{
printf("\narr1[%d]=%2.2f \t arr2[%d]=%2.2f",i,arr1[i],i,arr2[i]);

}
printf("\n\nAfter copying elements");
printf("\n arr1\t\tarr2\n");
for(i=0;i<=4;i++)
{
arr2[i]=arr1[i];
printf("\narr1[%d]=%2.2f \t arr2[%d]=%2.2f",i,arr1[i],i,arr2[i]);
}
getch();
}

/*program to accept elements in two single dimension 2D array
and add them into third array */
# include<stdio.h>
main()
{
int arr1[5], arr2[5], arr3[5];
int i=0;
printf("\n Enter elements for first array");
for(i=0;i<=4;i++)
{
printf("\nEnter number:");
scanf("%d",&arr1[i]);
}
i=0;
printf("\n Enter elements for second array");
for(i=0;i<=4;i++)
{
printf("\nEnter number:");
scanf("%d",&arr2[i]);
}
i=0;
printf("\n addition stored in third array");
for(i=0;i<=4;i++)
{
arr3[i]=arr1[i]+arr2[i];
printf("\n arr3[%d]=%d ",i, arr3[i]);
}
getch();
}




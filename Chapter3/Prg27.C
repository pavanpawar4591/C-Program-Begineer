# include<stdio.h>
main()
{
char str1[20]="Computer";
char str2[10]="World";
clrscr();
printf("\n String length of %s is %d", str1,strlen(str1));
printf("\n String length of %s is %d", str2,strlen(str2));
if (strcmp(str1,str2)!=0)
{
printf("\n %s and %s are not equal",str1,str2);
}
strcat(str1,str2,3);
printf("\n After concatination str1 is %s", str1);
strcpy(str1,str2);
printf("\n After copying str1=%s str2=%s", str1,str2);
getch();
}

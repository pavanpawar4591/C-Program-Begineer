/*  Using switch checking vowel
switchvow.c  */
# include<stdio.h>
void main()
{
char code;
clrscr();
printf("\n Enter character:");
scanf("%c", &code);
switch(code)                            // passing code to check the  value
{
case 'a':
case 'i':
case 'o':
case 'u':
printf("%c is vowel", code);
break;
default:
printf("The %c is not vowel", code);
break;
}
getch();
}

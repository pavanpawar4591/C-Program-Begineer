/* Accept character form user and check whether it is vowel or consonant.
char.c              */
# include<stdio.h>
void main()
{
char code; 
clrscr();
printf("Enter a single character:");
scanf("%c", &code);
if(code=='a' || code=='e' || code=='i' || code=='o' || code=='u')//             Checking for vowel
{
printf("\n The %c is vowel", code);
}
else
{
printf("\n The %c is consonant", code);                               // if not vowel then consonant
}
getch();
}

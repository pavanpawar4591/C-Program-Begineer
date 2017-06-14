/* Program to wish hello to user
    hello.c                                  */
# include<stdio.h>       // including header file
main()
{
char name[10];           // variable declaration of character type for accepting string value of max
clrscr();                      // function to clear the output screen
printf("Enter your name:");
scanf("%s", name);   // accepting input from user
printf("\n Hello %s welcome to the world of  C", name);  //printing message
getch(); // function for the quick output screen
}

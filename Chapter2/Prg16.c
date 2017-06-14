     /* print user’s name 5 times using while 
         whileprn.c      */
      # include<stdio.h>
      void main()
     {
     int i=1;
    char name[15];
    printf("\n Enter your name:");
    scanf("%s",name);
    while (i<=5)                                   //loop will run till value of i will become 5
   {
   printf("\n Your name is %s", name);
   i++;                                                  //Incrementing value of i each time by 1
  }
getch();
}

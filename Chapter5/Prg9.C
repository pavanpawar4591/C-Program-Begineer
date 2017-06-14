# include<stdio.h>
void main()
{
char *str[5]={"Keyboard",
	      "Monitor",
	      "CPU" ,
	      "Hard disk",
	      "SMPS"
	      };
int i=0;
clrscr();

for(i=0;i<=4;i++)
{
printf("\n %d element=%s",i, str[i]);
}
getch();
}


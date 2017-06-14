# include<stdio.h>
void main()
{
struct movie
{
char movie_nm[20];
char actor[15];
int rel_year;
};
struct movie *ptr;
clrscr();
printf("\n Enter movie_nm:");
scanf("%s", ptr->movie_nm);
printf("\n Enter movie actor:");
scanf("%s", ptr->actor);
printf("\n Enter release year:");
scanf("%d",&ptr->rel_year);
printf("\n Movie name - %s", ptr->movie_nm);
printf("\n Actor-%s",ptr->actor);
printf("\n Release year-%d",ptr->rel_year);
getch();
}

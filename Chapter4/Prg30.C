// program to accept and display details of book structure.
# include<stdio.h>
struct book
{
int book_id;
char book_name[10];
float price;
}b;
void main()
{
clrscr();
printf("\n Enter book-id:");
scanf("%d",&b.book_id);
printf("\n Enter book-name");
scanf("%s",b.book_name);
printf("\n Enter book price:");
scanf("%f", &b.price);
printf("\nBook id= %d \t book name=%s \t book price=%f \t", b.book_id,b.book_name, b.price);
getch();
}



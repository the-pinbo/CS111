// Lab 7 Questin 1
// Inbasekaran.P 201EC226
/*Program to input and display book information ( Title of the book,
 Author , ISBN,Price)*/
#include <stdio.h>
#include <stdlib.h>
struct books
{
	char title[30], author[30], isbn[10];
	int price;
};
typedef struct books books;
books b1;
void input_details(struct books *st)
{
	printf("Enter the Title of the book:");
	gets(st->title);
	printf("Enter the author:");
	gets(st->author);
	printf("Enter the ISBN:");
	gets(st->isbn);
	printf("Enter the price in RS: ");
	scanf("%d", &st->price);
}
void print_details(struct books st)
{
	printf("Book Deatils:\n");
	printf("Book Title is \"%s\" \n", st.title);
	printf("Book Name is \"%s\" \n", st.author);
	printf("Book ISBN is \"%s\" \n", st.isbn);
	printf("Book price in RS%d  \n", st.price);
}

int main()
{
	system("clear");
	struct books st;
	input_details(&st);
	print_details(st);
	system("pause");
	return 0;
}

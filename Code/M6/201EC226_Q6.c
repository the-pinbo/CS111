// Lab 7 Questin 6
// Inbasekaran.P 201EC226
/* Write a C program to compare structure and union variables */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct my_struct
{
	int int_data;
	float float_data;
	char name[20];
};
union my_union
{
	int int_data;
	float float_data;
	char name[20];
};

int main()
{
	system("clear");
	struct my_struct s = {1, 3.14, "my_struct"};
	union my_union u = {1, 3.14, "my_struct"};

	printf("Structure data:\nint_data: %d\n"
				 "float_data: %.2f\nname: %s\n",
				 s.int_data, s.float_data, s.name);
	printf("\nunion data:\nint_data: %d\n"
				 "float_data: %.2f\nname: %s\n",
				 u.int_data, u.float_data, u.name);

	printf("\nsizeof structure : %d\n", sizeof(s));
	printf("sizeof union : %d\n\n\n", sizeof(u));

	strcpy(u.name, "New name");

	printf("Structure data:\nint_data: %d\n"
				 "float_data: %.2f\nname: %s\n",
				 s.int_data, s.float_data, s.name);
	printf("\nunion data:\nint_data: %d\n"
				 "float_data: %.2f\nname: %s\n",
				 u.int_data, u.float_data, u.name);
	system("pause");
	return 0;
}

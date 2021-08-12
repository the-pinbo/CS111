#include <stdio.h>
#include <stdlib.h>
struct inbaEMP226
{
  char EC226_name[30], EC226_empId[10];
  double EC226_salary;
  double EC226_exp;
};
typedef struct inbaEMP226 inbaEMP226;

void inbaInput_details226(struct inbaEMP226 *EC226_emp)
{
  printf("Enter the employees name:");
  gets(EC226_emp->EC226_name);
  printf("Enter the Employee Id:");
  gets(EC226_emp->EC226_empId);
  printf("Enter the Current Salary:");
  scanf("%lf", &EC226_emp->EC226_salary);
  printf("Enter the years of experience:");
  scanf("%lf", &EC226_emp->EC226_exp);
}

void inbaPrint_details226(struct inbaEMP226 *EC226_emp)
{
  printf("Employees name: %s\n", EC226_emp->EC226_name);
  printf("Employee Id: %s\n", EC226_emp->EC226_empId);
  printf("Current Salary:%lf\n", EC226_emp->EC226_salary);
  printf("Years of experience:%lf\n", EC226_emp->EC226_exp);
}

void inbaCOMPUTE_INCR226(struct inbaEMP226 *EC226_emp)
{
  if (EC226_emp->EC226_exp >= 20)
  {
    EC226_emp->EC226_salary += .2 * EC226_emp->EC226_salary;
  }
  else if (EC226_emp->EC226_exp > 10)
  {
    EC226_emp->EC226_salary += .1 * EC226_emp->EC226_salary;
  }
  else
  {
    EC226_emp->EC226_salary += .07 * EC226_emp->EC226_salary;
  }
}

int main()
{
  system("clear");
  inbaEMP226 EC226_emp1 = {"Andy", "123abc", 10000, 5};
  inbaEMP226 EC226_emp2 = {"Ram", "987xyz", 100000, 25};
  inbaPrint_details226(&EC226_emp1);
  inbaPrint_details226(&EC226_emp2);
  inbaCOMPUTE_INCR226(&EC226_emp1);
  inbaCOMPUTE_INCR226(&EC226_emp2);
  inbaPrint_details226(&EC226_emp1);
  inbaPrint_details226(&EC226_emp2);
  return 0;
}

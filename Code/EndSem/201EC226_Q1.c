#include <stdio.h>
#include <stdlib.h>
#define inbnum226 4

struct intstudent226
{
  char inbname226[30];
  double inbmarks226;
  int inbrank226;
};
typedef struct intstudent226 intstudent226;

void inbswap226(intstudent226 *inba226, intstudent226 *inbb226)
{
  intstudent226 inbtemp226 = *inba226;
  *inba226 = *inbb226;
  *inbb226 = inbtemp226;
}
void inbrank226(intstudent226 *inbstudents226, int inbn226)
{
  for (int inbi226 = 0; inbi226 < inbn226 - 1; inbi226++)
    for (int inbj226 = 0; inbj226 < inbn226 - inbi226 - 1; inbj226++)
      if (inbstudents226[inbj226].inbmarks226 > inbstudents226[inbj226 + 1].inbmarks226)
        inbswap226(&inbstudents226[inbj226], &inbstudents226[inbj226 + 1]);
  system("clear");
  int inbrank226 = inbn226;
  for (int inbi226 = 1; inbi226 <= inbn226; inbi226++)
  {
    inbstudents226[inbi226 - 1].inbrank226 = inbrank226--;
    printf("Student name %s\n", inbstudents226[inbi226 - 1].inbname226);
    printf("Student rank %d\n", inbstudents226[inbi226 - 1].inbrank226);
    printf("Student marks %lf\n", inbstudents226[inbi226 - 1].inbmarks226);
    printf("%43s\n", "***");
  }
}

void inbupdate226(intstudent226 *inbstudents226, int inbn226)
{
  for (int inbi226 = 0; inbi226 < inbn226; inbi226++)
  {
    printf("Student name %s\n", inbstudents226[inbi226].inbname226);
    printf("Enter the marks:");
    scanf("%lf", &inbstudents226[inbi226].inbmarks226);
    printf("%43s\n", "***");
  };
  system("clear");
  printf("The marks are updated successfully.\n");
}

int main()
{
  system("clear");
  intstudent226 inbstudents226[inbnum226] = {
      {"Dhruv", 98.8, 1},
      {"Shyla", 97.5, 2},
      {"Ishaan", 91.4, 3},
      {"Diya", 81.7, 4},
  };
  inbupdate226(inbstudents226, inbnum226);
  inbrank226(inbstudents226, inbnum226);
  system("\npause");
  return 0;
}

#include <stdio.h>
#include <stdlib.h>

float inbread226()
{
  float inbdist226 = 0;
  printf("Enter distance traveled: ");
  scanf("%f", &inbdist226);
  return inbdist226;
}

int inbcomputefare226(float inbdist226)
{
  if (inbdist226 <= 12)
    return 100;

  if (inbdist226 <= 16)
    return 100 + (inbdist226 - 12) * 8;

  if (inbdist226 <= 20)
    return 100 + (inbdist226 - 16) * 6;

  if (inbdist226 > 20)
    return 100 + (inbdist226 - 20) * 5;
}

int main()
{
  system("clear");
  float inbdist226 = inbread226();
  int inbfare226 = inbcomputefare226(inbdist226);
  printf("Taxi Fare = %d\n", inbfare226);
  system("pause");
  return 0;
}
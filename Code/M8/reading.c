#include <stdio.h>
#include <stdlib.h>

int oneChar()
{
  system("clear");
  FILE *filePtr = fopen("Data.txt", "r");
  if (fileno == NULL)
  {
    perror("Error in opening the file");
    return -1;
  }
  int c;
  while ((c = fgetc(filePtr)) != EOF)
  {
    printf("%c", c);
  }
  if (fclose(filePtr) == EOF)
  {
    perror("Error in Closing the file");
    return -1;
  }
  system("pause");
  return 0;
}

int oneLine()
{
  FILE *filePtr = fopen("Data.txt", "r");
  if (fileno == NULL)
  {
    perror("Error in opening the file");
    return -1;
  }
  char str[101] = {'\0'};
  while (fgets(str, 100, filePtr))
    printf("%s", str);
  // or
  // fscanf(filePtr, % s, str);
  if (fclose(filePtr) == EOF)
  {
    perror("Error in Closing the file");
    return -1;
  }

  return 0;
}

int main()
{
  oneLine();
  return 0;
}
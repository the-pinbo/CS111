// Lab 4.2 Questin 4
// Inbasekaran.P 201EC226
/*Program to replace lowercase characters by uppercase & vice-versa*/

// For printf() and scanf()
#include <stdio.h>
// Including stdlib for system("clear") to clear the screen in the terminal.
#include <stdlib.h>
// Size of the string 
# define SIZE 100

int main()
{
    // To clear the console.
    system("clear");
    char string[SIZE] = {'\0'};
    // input the string 
    printf("Enter the string: ");
    scanf("%[^\n]s",string);

    for (int i = 0; string[i] != '\0'; i++)
    {
       if(string[i] >= 'a' && string[i] <= 'z')
        {
            string[i] = string[i] - 'a' + 'A';
        }
        else if (string[i] >= 'A' && string[i] <= 'Z')
        {
            string[i] = string[i] - 'A' + 'a';
        }
    }
    
    printf("The new string is: %s\n", string); 
    return 0;
}
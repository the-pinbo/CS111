// Lab 4.2 Questin 3
// Inbasekaran.P 201EC226
/*To delete extra blank spaces in a string*/
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
        if(string[i] == ' '&& string[i + 1] == ' ')
        {
            for (int j = i + 1; string[j] != '\0' ;j++)
            {
                string[j] = string[j+1];
            }
            i--;
        }
    }
    
    printf("The string  withour extra blank spaces is: %s\n", string); 
    return 0;
}
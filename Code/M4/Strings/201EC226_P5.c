// Lab 4.1 Questin 6
// Inbasekaran.P 201EC226
/*C Program to find all consecutive occurrences of any vowel in a string*/

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
    int occurrences = 0;

    for (int i = 0; string[i] != '\0'; i++)
    {
        int count = 0;
        if(string[i] == 'a'|| string[i] == 'A'|| 
        string[i] == 'e'|| string[i] == 'E'|| 
        string[i] == 'i'||string[i] == 'I'||
        string[i] == 'o'||string[i] == 'O'||
        string[i] == 'u'||string[i] == 'U')
        {
            count ++;
            while (string[++i] == 'a'|| string[i] == 'A'|| 
                string[i] == 'e'|| string[i] == 'E'|| 
                string[i] == 'i'||string[i] == 'I'||
                string[i] == 'o'||string[i] == 'O'||
                string[i] == 'u'||string[i] == 'U')
            {
                count ++;
            }
            if(count > 1)
            {
                printf("Consecutive occurrences of any vowel\n");
                for(int j = i -count; j<i; j++)
                    printf("%c",string[j]);
                printf("\n");
                occurrences ++;
            }
        }
    }
    printf("The number of consecutive occurrences of any vowel in a string is %d\n", occurrences); 
    return 0;
}
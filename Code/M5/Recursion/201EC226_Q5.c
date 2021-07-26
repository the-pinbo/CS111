// Lab 5.2 Questin 5
// Inbasekaran.P 201EC226
/*Program to find whether an entered year is a leap year or not*/
// For printf() and scanf()
#include <stdio.h>
// Including stdlib for system("clear") to clear the screen in the terminal.
#include <stdlib.h>
// To include bool data type. 
#include <stdbool.h>

bool swap(char* a, char* b)
{
    *a = *a^*b;
    *b = *a^*b;
    *a = *a^*b;
    return true;
}



char* rev_str(char* string,int n)
{
    int i = 0;
    if(n<=1)
    {
        return string;
    }
    swap(&string[i], &string[n-i-1]);
    return rev_str(&(string[++i]), n-2);
}

int tn = 10;
int main()
{
    if(tn--)
    {
        printf("Enter the string to be reversed: ");
        char string[100] = {'\0'};
        scanf("%s", string);
        int n = 0;
        while (string[++n]);
        rev_str(string, n);
        printf("The reversed string is: %s \n", string);
        return main();
    }
    return 0;
}
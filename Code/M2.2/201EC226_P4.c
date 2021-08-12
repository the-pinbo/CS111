// Lab 2 Questin 4
// Inbasekaran.P 201EC226
/*If a five-digit number is input through the keyboard, 
write a program to reverse the number*/

// Including standard input and output for printing the variables.
#include <stdio.h>
// Including stdlib for system("clear") to clear the screen in the terminal.
#include <stdlib.h>

int main()
{
   // To clear the console.
   system("clear");
   // input number
   int num;
   printf("Enter ther five digit number: ");
   scanf("%d", &num);
   int rev_num = 0;
   rev_num *= 10;
   // Adding last digit of num to rev_num
   rev_num += num % 10;
   // Removing the last digit
   num /= 10;
   // Repeating the same step for fore more times
   rev_num *= 10;
   // Adding last digit of num to rev_num
   rev_num += num % 10;
   // Removing the last digit
   num /= 10;
   rev_num *= 10;
   // Adding last digit of num to rev_num
   rev_num += num % 10;
   // Removing the last digit
   num /= 10;
   rev_num *= 10;
   // Adding last digit of num to rev_num
   rev_num += num % 10;
   // Removing the last digit
   num /= 10;
   rev_num *= 10;
   // Adding last digit of num to rev_num
   rev_num += num % 10;
   printf("Reverse of the number: %d", rev_num);
   system("pause");
   return 0;
}


// Lab 2 Questin 3
// Inbasekaran.P 201EC226 

/* If a five-digit number is input through the keyboard,
write a program to calculate the sum of its digits.*/

// Including standard input and output for printing the variables.
#include <stdio.h>
// Including stdlib for system("clear") to clear the screen in the terminal.
#include<stdlib.h>

int main()
{
   // To clear the console.
   system("clear");
   // input number 
   int num;
   printf("Enter ther five digit number: ");
   scanf("%d",&num);
   // initializing sum to 0
   int sum = 0;
   // Adding the last digit of num to sum
   sum += num%10;
   // Removes the last digit of num 
   num /= 10;
   // Repeating the above steps for 4 more times 
   sum += num%10;
   num /= 10;
   sum += num%10;
   num /= 10;
   sum += num%10;
   num /= 10;
   sum += num%10;
   // Output
   printf("Sum of it's digits: %d \n",sum);
   return 0;
   
}

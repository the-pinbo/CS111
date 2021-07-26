// Lab 7 Questin 5
// Inbasekaran.P 201EC226
/*Write a menu driven program for the following
i. Add two distances (in inch-feet) using structures
ii. Add two complex numbers by passing structure to a function
iii. Calculate the difference between two time periods using structures.*/

// For printf() and scanf()
#include <stdio.h>
// Including stdlib for system("clear") to clear the screen in the terminal.
#include <stdlib.h>

struct Distance
{
    int feet;
    float inch;
};
struct Distance input_dist(struct Distance d)
{
    printf("Enter the distance\n");
    printf("Enter feet: ");
    scanf("%d", &d.feet);
    printf("Enter inch: ");
    scanf("%f", &d.inch);
    return d;
}
struct Distance add_dist(struct Distance d1, struct Distance d2)
{
    struct Distance result;
    // adding distances
    result.feet = d1.feet + d2.feet;
    result.inch = d1.inch + d2.inch;
    // convert inches to feet if greater than 12
    while (result.inch >= 12.0)
    {
        result.inch = result.inch - 12.0;
        ++result.feet;
    }
    printf("\nSum of distances = %d\'-%.1f\"", result.feet, result.inch);
    return result;
}

struct complex
{
    float real;
    float imaginary;
};
struct complex input_cnum(struct complex cnum)
{
    printf("Enter real and imaginary part of the complex number:\n");
    scanf("%f%f", &cnum.real, &cnum.imaginary);
    return cnum;
}
struct complex add_cnum(struct complex cnum1, struct complex cnum2)
{
    struct complex sum;
    sum.real = cnum1.real + cnum2.real;
    sum.imaginary = cnum1.imaginary + cnum2.imaginary;
    printf("SUM = %0.2f + i %0.2f", sum.real, sum.imaginary);
}

struct TIME
{
    int seconds;
    int minutes;
    int hours;
};
struct TIME input_time(struct TIME time)
{
    printf("Enter the time. \n");
    printf("Enter hours, minutes and seconds: ");
    scanf("%d %d %d", &time.hours, &time.minutes, &time.seconds);
    return time;
}
struct TIME differenceBetweenTimePeriod(struct TIME start, struct TIME stop)
{
    struct TIME diff;
    while (stop.seconds > start.seconds)
    {
        --start.minutes;
        start.seconds += 60;
    }
    diff.seconds = start.seconds - stop.seconds;
    while (stop.minutes > start.minutes)
    {
        --start.hours;
        start.minutes += 60;
    }
    diff.minutes = start.minutes - stop.minutes;
    diff.hours = start.hours - stop.hours;
    printf("\nTime Difference: %d:%d:%d - ", start.hours, start.minutes, start.seconds);
    printf("%d:%d:%d ", stop.hours, stop.minutes, stop.seconds);
    printf("= %d:%d:%d\n", diff.hours, diff.minutes, diff.seconds);
    return diff;
}

int menu()
{
    printf("Enter Your choice\n");
    printf("1. Add two distances (in inch-feet) using structures\n");
    printf("2. Add two complex numbers by passing structure to a function\n");
    printf("3. Calculate the difference between two time periods using structures\n");
    int choice;
    scanf("%d", &choice);
    return choice;
}

void switch_case(int choice)
{
    switch (choice)
    {
    case 1:
    {
        struct Distance d1;
        printf("Distance 1\n");
        d1 = input_dist(d1);
        printf("Distance 2\n");
        struct Distance d2;
        d2 = input_dist(d2);
        add_dist(d1, d2);
        break;
    }
    case 2:
    {
        struct complex c1;
        printf("Complex number 1\n");
        c1 = input_cnum(c1);
        printf("Complex number  2\n");
        struct complex c2;
        c2 = input_cnum(c2);
        add_cnum(c1, c2);
        break;
    }
    case 3:
    {
        struct TIME start;
        printf("Start Time\n");
        start = input_time(start);
        struct TIME end;
        printf("End Time\n");
        end = input_time(end);
        differenceBetweenTimePeriod(start, end);
        break;
    }
    default:
        printf("wrong Input\n");
    }
}

int main()
{
    switch_case(menu());
    return 0;
}
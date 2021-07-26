// Lab 4.1 Questin 7
// Inbasekaran.P 201EC226
/*To add and multiply two matrices.*/

// For printf() and scanf()
#include <stdio.h>
// Including stdlib for system("clear") to clear the screen in the terminal.
#include <stdlib.h>

#define SIZE 10

int main()
{
    // To clear the console.
    system("clear");
    printf("Enter the order[n x m] of the first matrix: ");
    int n1 ,m1;
    scanf("%d %d", &n1, &m1);

    printf("Enter the order[n x m] of the second matrix: ");
    int n2 ,m2;
    scanf("%d %d", &n2, &m2);


    int mat1[SIZE][SIZE] = {0};
    int mat2[SIZE][SIZE] = {0};
    int add_matrix[SIZE][SIZE] = {0};
    int mul_matrix[SIZE][SIZE] = {0};

    printf("Enter the elements of first matrix: \n");
    for(int i = 0; i < n1; ++i)
    {
        for(int j = 0; j< m1; ++j)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Enter the elements of second matrix: \n");
    for(int i = 0; i < n2; ++i)
    {
        for(int j = 0; j< m2; ++j)
        {
            scanf("%d",&mat2[i][j]);
        }
    }

    if(n1 == n2 && m2==m1)
    {
        for(int i = 0; i < n1; ++i)
        {
            for(int j = 0; j< m1; ++j)
            {
                add_matrix[i][j] = mat1[i][j]+mat2[i][j];
            }
        }
        printf("The elements of the addition matrix: \n");
        for(int i = 0; i < n1; ++i)
        {
            for(int j = 0; j< m1; ++j)
            {
                printf("%d  ",add_matrix[i][j]);
            }
            printf("\n");
        }

    }
    else
        printf("!!! The order of the matrix is different.Matrix addition is not possible\n");

    if(m1 == n2)
    {
        
        for(int i = 0; i < n1; ++i)
        {
            for(int j = 0; j< m2; ++j)
            {
                for (int k = 0; k < m1; k++)
                {
                    mul_matrix[i][j] += (mat1[i][k] * mat2[k][j]);
                }
                
            }
        }

        printf("The elements of the multiplication matrix: \n");
        for(int i = 0; i < n1; ++i)
        {
            for(int j = 0; j< m2; ++j)
            {
                printf("%d  ",mul_matrix[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("!!! Matrix multiplication is not possible\n");

    return 0;
}
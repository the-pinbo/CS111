#include <stdio.h>

int test()
{
    int n,temp, sum = 0 , product = 1 ;
    scanf("%d",&n);
    temp=n;
    while (temp) 
    {
        int d = temp % 10;
        temp /= 10;
        if (d && (n%d == 0)) 
            {
                sum += d;
                product *= d;
            }
    }
    printf("Sum = %d ",sum);
    printf("Product = %d",product);
    return 0;
}





int main()
{
    for(int i = 1; 1 ; ++i)
    {
        printf("\nTest Case %d\n", i);
        test();
    }

    return 0;
    
}
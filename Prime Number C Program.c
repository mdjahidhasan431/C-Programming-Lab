#include <stdio.h>

int isPrime(int num)
{
    int i;

    if (num < 2)
        return 0;

    for (i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return 0;
    }

    return 1;
}

int main()
{
    int n, i, count = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Prime numbers are:\n");

    for (i = 1; i <= n; i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
            count++;
        }
    }

    printf("\nTotal Prime = %d\n", count);

    return 0;
}

#include <stdio.h>

int main()
{
    int n, i;
    int odd = 0, even = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Total Odd Numbers = %d\n", odd);
    printf("Total Even Numbers = %d\n", even);

    return 0;
}

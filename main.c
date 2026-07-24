#include <stdio.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int i, sum = 0;
    float mean;

    for(i = 0; i < 5; i++)
    {
        sum = sum + a[i];
    }

    mean = (float)sum / 5;
    printf("Mean = %.2f", mean);

    return 0;
}

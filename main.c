#include <stdio.h>
#include <math.h>

int main()
{
    int a[5] = {30, 40, 50, 60, 70};
    int i, sum = 0;
    float mean, sd, temp = 0;


    for(i = 0; i < 5; i++)
    {
        sum = sum + a[i];
    }

    mean = (float)sum / 5;


    for(i = 0; i < 5; i++)
    {
        temp = temp + (a[i] - mean) * (a[i] - mean);
    }


    sd = sqrt(temp / 5);

    printf("Mean = %.2f\n", mean);
    printf("Standard Deviation = %.2f", sd);

    return 0;
}

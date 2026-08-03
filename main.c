#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float x0, x1;
    int i;

    printf("Enter the value of a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    printf("Enter initial guess (x0): ");
    scanf("%f", &x0);

    for(i = 1; i <= 20; i++)
    {
        x1 = x0 - ((a*x0*x0 + b*x0 + c) / (2*a*x0 + b));

        if(fabs(x1 - x0) < 0.0001)
            break;

        x0 = x1;
    }

    printf("\nRoot = %.4f", x1);

    return 0;
}

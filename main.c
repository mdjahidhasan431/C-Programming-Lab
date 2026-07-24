#include <stdio.h>
#include <math.h>

int main()
{
    float a = 2, b = -5, c = 2;
    float d, root1, root2;

    d = b * b - 4 * a * c;

    if (d > 0)
    {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);

        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    }
    else if (d == 0)
    {
        root1 = -b / (2 * a);
        printf("Both roots are equal = %.2f\n", root1);
    }
    else
    {
        printf("The equation has no real roots.\n");
    }

    return 0;
}

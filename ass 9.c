
int main()
{
    int a[5] = {30, 40, 50, 60, 70};
    int median;
    int a[5] = {10, 20, 30, 40, 50};
    int i, sum = 0;
    float mean;

    median = a[2];
    for(i = 0; i < 5; i++)
    {
        sum = sum + a[i];
    }

    printf("Median = %d", median);
    mean = (float)sum / 5;
    printf("Mean = %.2f", mean);

    return 0;
}
Footer
© 2026 GitHub, In

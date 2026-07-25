#include<stdio.h>
int main()
{
    float marks ;
    printf("Enter Student's marks :");
    scanf("%f",&marks);
    if (marks < 0 || marks>100)
    {
        printf("Enter Invalid Marks");
    }
    else if (marks >=80)
    {
        printf("The grade: A+");
    }
    else if (marks>=75)
    {
        printf("The grade :A");
    }
    else if (marks >=70)
    {
        printf("The Grade marks:A-");
    }
    else if (marks>=65)
    {
        printf("The grade marks :B+");
    }
    else if (marks >=60)
    {
        printf("The grade marks :B");
    }
    else if (marks >=55)
    {
        printf("The grade marks :B-");
    }
    else if (marks >=50)
    {
        printf("The grade marks: C+");
    }
    else if (marks >=45)
    {
        printf("The grade marks : C");
    }
    else if (marks >=40)
    {
        printf("The grade marks:D");
    }
    else
    {
        printf("The grade marks:F");
    }
    return 'o';
}

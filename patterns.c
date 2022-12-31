#include <stdio.h>
int lefttriangle()
{
    int n, i, j;
    printf("enter the the number of rows:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
}

int leftdowntriangle()
{
    int n, i, j;
    printf("enter the the number of rows:");
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
}

int diamond()
{
    int n;
    printf("enter the the number of rows:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        // printing spaces
        for (int j = n; j > i; j--)
        {
            printf(" ");
        }
        // printing star
        for (int k = 0; k < i * 2 - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    // downside pyramid
    for (int i = 1; i <= n - 1; i++)
    {
        // printing spaces
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        // printing star
        for (int k = (n - i) * 2 - 1; k > 0; k--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

int pyramid()
{
    int n;
    printf("enter the the number of rows:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

int inversepyramid()
{
    int n;
    printf("enter the the number of rows:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < 2 * (n - i) - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

int main()
{
    int n;
    printf("****** ****** WELCOME ****** ******");
    printf("\n");
    printf("\n");
    printf("1.LEFT TRAINGLE \n");
    printf("2.LEFT DOWN TRIANGLE \n");
    printf("3.DIAMOND \n");
    printf("4.PYRAMID \n");
    printf("5.INVERSE PYRAMID \n");
    printf("\n");
    printf("\n");
    printf("ENTER INPUT :\n");
    scanf("%d", &n);
    printf("\n");
    printf("\n");

    if (n == 1)
    {
        lefttriangle();
    }
    else if (n == 2)
    {
        leftdowntriangle();
    }

    else if (n == 3)
    {
        diamond();
    }

    else if (n == 4)
    {
        pyramid();
    }
}
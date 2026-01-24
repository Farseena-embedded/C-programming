#include <stdio.h>

int main()
{
    int n, i, space, star;

    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("\n");

    for (i = 1; i <= n; i++)
    {
        // Loop to print spaces
        for (space = 1; space <= (n - i); space++)
        {
            printf(" ");
        }

        // Loop to print stars
        for (star = 1; star <= (2 * i - 1); star++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
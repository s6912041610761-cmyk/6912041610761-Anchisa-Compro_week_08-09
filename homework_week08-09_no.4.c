#include <stdio.h>

int main(void)
{
    int n;
    int prime = 1;

    printf("Enter number: ");
    scanf("%d", &n);

    if (n < 2)
    {
        prime = 0;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                prime = 0;
                break;
            }
        }
    }

    if (prime)
    {
        printf("Prime\n");
    }
    else
    {
        printf("Not Prime\n");
    }

    return 0;
}
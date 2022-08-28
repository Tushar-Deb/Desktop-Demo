#include <stdio.h>

int main()
{

    int n;
    int min;

    printf("Enter a number (input 0 to find min): ");
    scanf("%d", &n);

    while (n != 0)
    {
        if (min > n)
        {
            min = n;
        }
        printf("Enter a number (input 0 to find min): ");
        scanf("%d", &n);
    }
    printf("Min is: %d", min);
}

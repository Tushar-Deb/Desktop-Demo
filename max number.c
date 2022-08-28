#include <stdio.h>

int main()
{

    int n;
    int max = 0;

    printf("Enter a number (input 0 to find max): ");
    scanf("%d", &n);

    while (n != 0)
    {
        if (max < n)
        {
            max = n;
        }
        printf("Enter a number (input 0 to find max): ");
        scanf("%d", &n);
    }
    printf("Max is: %d", max);
}

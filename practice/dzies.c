#include <stdio.h>

int main()
{
    int i, j;
    int range = 10;

    printf("%5c",' ');
    for (i = 1; i <= range; i++)
        printf("%5d", i);

    for (i = 1; i <= range; i++)
    {
        printf("\n%5d", i);
        for (j = 1; j <= range; j++)
        {
            printf("%5d", j*i);
        }
    }
}

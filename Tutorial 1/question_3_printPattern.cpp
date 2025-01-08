#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    /* code */
    int height;

    printf("Enter the height:\n");
    scanf("%d", &height);

    printf("Pattern:\n");

    for (size_t i = 0; i < height; i++)
    {
        /* code */

        for (size_t j = 0; j < i + 1; j++)
        {
            /* code */
            printf("%d ", (i + 1) % 1);
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    /* code */
    float x_value, e_x, factorial = 1;

    printf("Enter x:\n");
    scanf("%f", &x_value);

    e_x = 1;

    for (size_t i = 1; i <= 10; i++)
    {
        /* code */
        // printf("%f", i);
        printf("i: %d\n", i);

        factorial *= i;
        e_x += powf(x_value, i) / factorial;

        // for (int j = 1; j <= i; j++)
        // {
        //     /* code */
        //     printf("j: %d\n", j);
        // }
    }

    printf("Result = %.2f\n", e_x);

    return 0;
}

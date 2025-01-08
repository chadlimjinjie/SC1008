#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    /* code */
    float a1, b1, c1, a2, b2, c2, denominator, x, y;

    printf("Enter the values for a1, b1, c1, a2, b2, c2:\n");
    scanf("%f %f %f %f %f %f", &a1, &b1, &c1, &a2, &b2, &c2);
    printf("%f %f %f %f %f %f\n", a1, b1, c1, a2, b2, c2);

    denominator = (a1 * b2) - (a2 * b1);

    if (denominator == 0)
    {
        /* code */
        printf("Unable to compute because the denominator is zero!\n");
        return 0;
    }

    x = ((b2 * c1) - (b1 * c2)) / denominator;
    y = ((a1 * c2) - (a2 * c1)) / denominator;
    printf("x = %.2f and y = %.2f\n", x, y);

    return 0;
}

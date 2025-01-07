#include <stdio.h>

/*
Control Flow - Slide 30
*/
int main()
{
    /* Write your code here */

    int num_lines;
    float sum, num, average = 0;

    while (true)
    {
        /* code */

        num_lines = 0;

        printf("Enter number of lines:\n");
        scanf("%d", &num_lines);

        if (num_lines == -1)  // Exit condition
        {
            printf("Exiting program.\n");
            break;
        }

        for (int i = 0; i < num_lines; i++)
        {
            /* code */
            printf("Enter line %d (end with -1):\n", i + 1);

            while (true)
            {
                scanf("%f", &num);
                if (num == -1) break;
                sum = sum + num;
            }
            printf("The sum is %f\n", sum);
            sum = 0;
            num = 0;
        }
    }

    return 0;
}
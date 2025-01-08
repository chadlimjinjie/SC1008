#include <stdio.h>
void reverseAr1D(int ar[], int size);
int main()
{
    int ar[10];
    int size, i;
    printf("Enter array size: \n");
    scanf("%d", &size);
    printf("Enter %d data: \n", size);
    for (i = 0; i <= size - 1; i++)
        scanf("%d", &ar[i]);
    reverseAr1D(ar, size);
    printf("reverseAr1D(): ");
    if (size > 0)
    {
        for (i = 0; i < size; i++)
            printf("%d ", ar[i]);
    }
    return 0;
}
void reverseAr1D(int ar[], int size)
{
    /* Write your code here */
    int temp;
    for (int i = (size / 2) - 1; i >= 0; i--)
    {
        /* code */
        temp = ar[i];
        ar[i] = ar[size - i - 1];
        ar[size - i - 1] = temp;
        // printf("%d\n", size - i - 1);
        // printf("%d\n", temp);
    }

    // for (int i = size - 1, j = 0; i > j; i--, j++) // Two pointers
    // {
    //     int temp = ar[i];
    //     ar[i] = ar[j];
    //     ar[j] = temp;
    // }

}
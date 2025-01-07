#include <stdio.h>
#include <string>
using namespace std;

/*
Grade Mark
A 100-75
B 74-65
C 64-55
D 54-45
F 44-0
*/
int main()
{
    /* Write your code here */

    int student_id, mark;
    char grade;
    string test = "hi";

    while (true)
    {
        /* code */

        printf("Enter Student ID:\n");
        scanf("%d", &student_id);
        // printf("student_id %d", student_id);
        if (student_id <= -1)
        {
            /* code */
            return 0;
        }

        printf("Enter Mark:\n");
        scanf("%d", &mark);
        // printf("mark %d", mark);
        if (mark <= 100 & mark >= 75)
        {
            /* code */
            grade = 'A';
        }
        else if (mark <= 74 & mark >= 65)
        {
            /* code */
            grade = 'B';
        }
        else if (mark <= 64 & mark >= 55)
        {
            /* code */
            grade = 'C';
        }
        else if (mark <= 54 & mark >= 45)
        {
            /* code */
            grade = 'D';
        }
        else if (mark <= 44 & mark >= 0)
        {
            /* code */
            grade = 'F';
        }
        else
        {
            /* code */
        }

        printf("Grade = %c\n", grade);
    }

    return 0;
}
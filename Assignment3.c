
#include <stdio.h>

int main()
{
    int a, b, opt;

    printf("Enter 1st number : ");
    if (scanf("%d", &a) != 1)
    {
        printf("Invalid input! Please enter a number.\n");
        return 0;
    }

    printf("Enter 2nd number : ");
    if (scanf("%d", &b) != 1)
    {
        printf("Invalid input! Please enter a number.\n");
        return 0;
    }

    printf(" 1. Addition \n");
    printf(" 2. Substraction \n");
    printf(" 3. Multiplication \n");
    printf(" 4. Division \n");

    printf("Enter Choice (1 to 4) : ");
    if (scanf("%d", &opt) != 1)
    {
        printf("Invalid input! Please enter a number.\n");
        return 0;
    }

    switch (opt)
    {
        case 1:
            printf("Addition is : %d \n", a+b);
            break;

        case 2:
            printf("Substraction is : %d \n", a-b);
            break;

        case 3:
            printf("Multiplication is : %d \n", a*b);
            break;

        case 4:
            if (b == 0)
            {
                printf("Division by 0 is not possible\n");
            }
            else
            {
                printf("Division is : %.3f \n", (float)a/b);
            }
            break;

        default:
            printf("Invalid Choice! Please enter between 1 to 4.\n");
    }

    return 0;
}

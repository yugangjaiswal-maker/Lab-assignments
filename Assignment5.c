#include <stdio.h>
#include <string.h>
int main()
{
    char car1[100];
    char car2[100];
    long long int ch;

    printf("Enter 1st string: ");
    scanf("%s", car1);


{
    printf("\n1. Length of strings");
    printf("\n2. Copy string");
    printf("\n3. Combine strings");
    printf("\n4. Compare strings");
    printf("\nEnter choice: ");
    scanf("%lld", &ch);

    switch (ch)
    {
        case 1:
            printf("Length = %lu",(unsigned long) strlen(car1));
            break;

        case 2:
            strcpy(car2, car1);
            printf("Copied string = %s", car2);
            break;

        case 3:
            printf("Enter 2nd string: ");
            scanf("%99s", car2);

            if (strlen(car1) + strlen(car2) < sizeof(car1))
            {
                strcat(car1, car2);
                printf("Result = %s", car1);
            }
            else
                printf("Strings too long (invaild)");
            break;

        case 4:
            printf("Enter 2nd string: ");
            scanf("%99s", car2);

            if (strcmp(car1, car2) == 0)
                printf("Strings are equal");
            else
                printf("Strings are not equal");
            break;

        default:
            printf("Invalid choice");
    }
}
}
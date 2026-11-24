
#include <stdio.h>

int main()
{
    int year, i, j, days, firstday;
    int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    char *months[12] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
    };

    printf("Enter year : ");
    scanf("%d", &year);

    // Checking for leap year
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        month[1] = 29;
    }

    // Finding the first day of the year
    firstday = (year - 1 + (year - 1)/4 - (year - 1)/100
                + (year - 1)/400 + 1) % 7;

    printf("\n          CALENDAR %d\n", year);

    for (i = 0; i < 12; i++)
    {
        printf("\n\n\n\n          %s\n", months[i]);
        printf(" Sun Mon Tue Wed Thu Fri Sat\n");

        days = month[i];

        // Printing spaces before the first day
        for (j = 0; j < firstday; j++)
        {
            printf("    ");
        }

        // Printing dates
        for (j = 1; j <= days; j++)
        {
            printf("%4d", j);

            if ((j + firstday) % 7 == 0)
            {
                printf("\n");
            }
        }

        printf("\n");

        // Finding the first day of the next month
        firstday = (firstday + days) % 7;
    }

    return 0;
}

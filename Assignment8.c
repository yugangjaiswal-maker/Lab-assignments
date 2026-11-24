
#include <stdio.h>

int main()
{
    int a, b, temp;
    int *p1;
    int *p2;

    printf("Enter 1st number : ");
    scanf("%d", &a);

    printf("Enter 2nd number : ");
    scanf("%d", &b);

    p1 = &a;
    p2 = &b;

    printf("\nNumbers before swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("\nNumbers after swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}

#include<stdio.h>

int factorialloop(int n) 
{
    int fact = 1;

    for (int i = 1; i <= n; i++) 
    {
        fact = fact * i;
    }
    return fact;
}

int factorialrecursion(int n) 
{
    if (n == 0 || n == 1) 
    {
        return 1;
    } 
    else 
    {
        return n * factorialrecursion(n - 1);
    }
}

int main() 
{
    int n , result ;

     printf("Enter a number: ");
     scanf("%d", &n);
    
    if (n < 0) 
    {
        printf("Factorial is not defined for negative numbers.\n");
    } 

    else if (n>12) 
    {
        printf("Factorial of %d is too large to compute.\n", n);
    }

    else
    {
        result = factorialloop(n);
        printf("Factorial of %d using loop is: %d\n", n, result);

        result = factorialrecursion(n);
        printf("Factorial of %d using recursion is: %d\n", n, result);
    }
}
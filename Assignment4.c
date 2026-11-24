#include <stdio.h>
int main()
{
    int a[10][10];
    int b[10][10];
    int sum[10][10];
    int diff[10][10];
    int i,j,r,c;

    printf("Enter number of rows : ");
    if(scanf("%d",&r)!=1)
    {
        printf("Invalid input for rows.\n");
        return 1;
    }

    printf("Enter number of columns : ");
    if (scanf("%d" , &c)!=1)
    {
        printf("Invalid input for column.\n");
        return 1;
    }

    printf("Enter elements of 1st matrix :\n");
    for (i=0 ; i<r ; i++)
    {
        for (j=0 ; j<c ; j++)
        {
            if(scanf("%d" , &a[i][j]) !=1)
          {
                 printf("Invalid input for element [%d][%d].\n", i, j);
                 return 1;
          }
        }
    }

    printf("Enter elements of 2nd matrix :\n");
    for (i=0 ; i<r ; i++)
    {
        for (j=0 ; j<c ; j++)
        {
            if(scanf("%d" , &b[i][j])!=1)
            {
                 printf("Invalid input for element [%d][%d].\n", i, j);
                 return 1;
            }
        }
    }

    for (i=0 ; i<r ; i++)
    {
        for (j=0 ; j<c ; j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
            diff[i][j]=a[i][j]-b[i][j];
        }
    }

    printf("\nSum of matrices :\n");
    for (i=0 ; i<r ; i++)
    {
        for (j=0 ; j<c ; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    printf("\nDifference of matrices :\n");

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
        printf("%d ", diff[i][j]);
        }
    printf("\n");
    }
}
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    printf("For addition :\n");
    int r1, c1, i, j;
    printf("Enter the row and column no of 1st matrix :\n");
    scanf("%d%d", &r1, &c1);
    int r2, c2;
    printf("Enter the row and column no of 2nd matrix :\n");
    scanf("%d%d", &r2, &c2);
    if(r1 == r2 && c1 == c2)
    {
        int arr1[r1][c1];
        printf("Enter the elments of the 1st matrix :\n");
        for(i = 0; i < r1; i++)
        {
            for(j = 0; j < c2; j++)
                scanf("%d", &arr1[i][j]);
        }
        int arr2[r2][c2];
        printf("Enter the elements of the 2nd matrix :\n");
        for(i = 0; i < r2; i++)
        {
            for(j = 0; j < c2; j++)
                scanf("%d", &arr2[i][j]);
        }
        printf("After the addition :\n");
        for(i = 0; i < r1; i++)
        {
            for(j = 0; j < c1; j++)
            {
                printf("%d ", arr1[i][j] + arr2[i][j]);
            }
            printf("\n");
        }
    }
    else printf("Sorry the matrices cannot be added.\n");

    printf("For subtraction :\n");
    printf("Enter the row and column no of 1st matrix :\n");
    scanf("%d%d", &r1, &c1);
    printf("Enter the row and column no of 2nd matrix :\n");
    scanf("%d%d", &r2, &c2);
    if(r1 == r2 && c1 == c2)
    {
        int arr1[r1][c1];
        printf("Enter the elments of the 1st matrix :\n");
        for(i = 0; i < r1; i++)
        {
            for(j = 0; j < c2; j++)
                scanf("%d", &arr1[i][j]);
        }
        int arr2[r2][c2];
        printf("Enter the elements of the 2nd matrix :\n");
        for(i = 0; i < r2; i++)
        {
            for(j = 0; j < c2; j++)
                scanf("%d", &arr2[i][j]);
        }
        printf("After the subtraction :\n");
        for(i = 0; i < r1; i++)
        {
            for(j = 0; j < c1; j++)
            {
                printf("%d ", arr1[i][j] - arr2[i][j]);
            }
            printf("\n");
        }
    }
    else printf("Sorry the matrices cannot be subtracted.\n");

    printf("For Multiplication :\n");
    printf("Enter the row and column no of 1st matrix :\n");
    scanf("%d%d", &r1, &c1);
    printf("Enter the row and column no of 2nd matrix :\n");
    scanf("%d%d", &r2, &c2);
    if(c1 == r2)
    {
        int arr1[r1][c1];
        printf("Enter the elments of the 1st matrix :\n");
        for(i = 0; i < r1; i++)
        {
            for(j = 0; j < c1; j++)
                scanf("%d", &arr1[i][j]);
        }
        int arr2[r2][c2];
        printf("Enter the elements of the 2nd matrix :\n");
        for(i = 0; i < r2; i++)
        {
            for(j = 0; j < c2; j++)
                scanf("%d", &arr2[i][j]);
        }
        printf("After the multiplication :\n");
        int x;
        for(i = 0; i < r1; i++)
        {
            x = 0;
            for(j = 0; j < c2; j++)
            {
                int d = 0;
                for(int k = 0; k < c1; k++)
                {
                    d += arr1[i][k] * arr2[k][x];
                }
                printf("%d ", d);
                x++;
            }
            printf("\n");
        }
    }
    else printf("Sorry the matrices cannot be multiplicated.\n");
    return 0;
}

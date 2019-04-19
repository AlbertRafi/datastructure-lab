#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, i, j, coun = 0, x, k;
    printf("Enter the row and column no of the matrix :\n");
    scanf("%d%d", &n, &m);
    int arr2D[n][m];

    printf("Enter the type of the matrix :\n");
    printf("1.Triangular 2.Tridiagonal :\n");
    scanf("%d", &x);

    if(x == 1)
    {
        printf("Enter 1.upper or 2.lower :\n");
        scanf("%d", &k);
        printf("Enter the element of the matrix :\n");
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < m; j++)
            {
                scanf("%d", &arr2D[i][j]);
                if(arr2D[i][j] > 0)coun++;
            }
        }
        //cout << coun << endl;
        int arr1D[coun], p = 0, l, r;
        if(k == 2)
        {
            for(i = 0; i < n; i++)
            {
                for(j = 0; j < m; j++)
                {
                   if(arr2D[i][j] > 0) { arr1D[p] = arr2D[i][j]; p++; }
                }
            }
            //cout << p << endl;
            printf("Enter the row and column of the elements to identify :\n");
            scanf("%d%d", &l, &r);
            printf("%d", arr1D[(l*(l-1)/2)+r-1]);
        }
        else
        {
            for(i = 0; i < n; i++)
            {
                for(j = 0; j < m; j++)
                {
                   if(arr2D[i][j] > 0) { arr1D[p] = arr2D[i][j]; p++; }
                }
            }
            printf("Enter the row and column of the elements to identify :\n");
            scanf("%d%d", &l, &r);
            printf("%d", arr1D[p-(((l-1)*l)/2)-r]);
        }
    }
    return 0;
}


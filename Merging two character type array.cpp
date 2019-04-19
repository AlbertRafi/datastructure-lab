#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    printf("Enter the size of the two array : \n");
    scanf("%d%d", &n, &m);
    //cout << n << " " << m << endl;

    char arr1[n+m], arr2[m], i;

    printf("Enter the %d elements of 1st array : \n", n);
    for(i = 0; i < n; i++)
        cin >> arr1[i];

    printf("Enter the %d elements of 2nd array : \n", m);
    for(i = 0; i < m; i++)
        cin >> arr2[i];

    int j;
    for(i = n, j = 0; j < m; i++, j++)
        arr1[i] = arr2[j];

    printf("Now after merging the 2nd array to 1st array : \n");
    for(i = 0; i < n+m; i++)
        printf("%c ", arr1[i]);
    printf("\n");

    return 0;
}


#include <iostream>
using namespace std;
int a[120];
int main() {

    int n,x,y,c=-1,k;
    cin >> n;
    for(int i =0;i<n;i++)
    {
        cin>>x;
        for(k=0;k<x;k++)
        {
            cin>>y;
            a[y]++;
            if(a[y]>c) c=a[y];
        }

    }
    for(int i=1;i<=102;i++)
    {
        if(a[i]==c) cout << i <<" ";
    }





    return 0;
}



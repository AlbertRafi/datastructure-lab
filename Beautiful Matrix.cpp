#include <iostream>
#include<algorithm>

using namespace std;

int main() {
    int x[5][5], op=0;


    for(int i=0;i<5;i++)
    {
        for(int  j=0 ;j<5; j++)
        {

            cin >> x[i][j];

            if(x[i][j] != 0)
                {
                    op =abs(i-2) + abs(j-2);
                    cout << op << endl;
                    break;
                }
        }
    }



    return 0;
}



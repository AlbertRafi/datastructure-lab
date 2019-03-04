#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue <int> q;
    int x;
    while(x!=0)
    {
      cin >> x;
      for(int i=1;i<=x;i++)
      {
          q.push(i) ;
      }

    }




    return 0;
}



#include <iostream>
using namespace std;

int main() {

    char  alpha[30] = "abcdefghijklmnopqrstuvwxyz";
    string s;
    int count = 0;

    getline(cin, s);

    for(int i=1;i<s.size()-1;i=i+3)
    {
        for(int j=0;j<26;j++)
        {
            if(s[i]==alpha[j]) alpha[j]= '0';
        }
    }
    for(int x=0;x<26;x++)
    {
        if(alpha[x]=='0')
            count++;
    }
    cout << count << endl;

    return 0;
}



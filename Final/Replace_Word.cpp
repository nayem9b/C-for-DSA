#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++)
    {
        string s;
        getline(cin, s);
        istringstream iss(s);
        string S, X;
        iss >> S >> X;
        while (S.find(X) != -1)
        {
            S.replace(S.find(X), X.length(), "#");
        }
        cout << S << endl;
    }
    return 0;
}
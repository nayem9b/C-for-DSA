#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int times;
        char c;
        cin >> times >> c;
        for (int i = 0; i < times; i++)
        {
            cout << c << " ";
        }
        cout << endl;
    }
    return 0;
}
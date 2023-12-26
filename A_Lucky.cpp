#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string ticket;
        cin >> ticket;
        int digit1 = ticket[0] - '0';
        int digit2 = ticket[1] - '0';
        int digit3 = ticket[2] - '0';
        int digit4 = ticket[3] - '0';
        int digit5 = ticket[4] - '0';
        int digit6 = ticket[5] - '0';
        if ((digit1 + digit2 + digit3) == (digit4 + digit5 + digit6))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}

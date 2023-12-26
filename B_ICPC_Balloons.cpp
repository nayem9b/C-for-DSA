#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int sum = 0;
        cin >> n;
        string s;
        cin >> s;
        int count[26] = {0};
        for (int i = 0; i < s.length(); i++)
        {
            count[s[i] - 'A']++;
        }
        for (int i = 0; i < s.length(); i++)
        {
            int moreThanSingle = 0;
            int single = 0;
            int value = s[i] - 65;
            if (count[value] != 0)
            {
                // cout << char(value + 'A') << " - " << count[value] << endl;
                // using frequency array
                if (count[value] > 1)
                {
                    moreThanSingle = count[value] + 1;
                }
                else if (count[value] = 1)
                {
                    single = 2;
                }
            }
            count[value] = 0;
            int totalBalloons = moreThanSingle + single;
            sum += totalBalloons;
        }
        cout << sum << endl;
    }
    return 0;
}

// 6 3 ABA 1 A 3 ORZ 5 BAAAA 4 BKPT 10 CODEFORCES
// 5 2 6 7 8 17
// 5 2 6 7 8 17
// https: // codeforces.com/contest/1703/problem/B
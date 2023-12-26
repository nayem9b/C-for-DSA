#include <bits/stdc++.h>
using namespace std;
int main()
{
    int X, N;
    long long sum = 0;
    cin >> X >> N;

    for (int i = 0; i <= N; i += 2)
    {
        long long power = 1;
        for (int j = 0; j < i; ++j)
        {
            power *= X;
        }
        sum += power;
    }

    cout << sum-1 << endl;
    return 0;
}

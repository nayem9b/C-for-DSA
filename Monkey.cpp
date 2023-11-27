#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a[100001];

    while (cin.getline(a, 100001))
    {
        for (size_t l = 0; l < strlen(a); l++)
        {
            for (size_t i = 0; i < strlen(a) - 1; i++)
            {
                for (size_t j = i + 1; j < strlen(a); j++)
                {
                    if (a[i] > a[j])
                    {
                        int tmp = a[i];
                        a[i] = a[j];
                        a[j] = tmp;
                    }
                }
            }
            if (a[l] != ' ')
            {
                cout << a[l];
            }
        }
        cout << endl;
    }

    return 0;
}

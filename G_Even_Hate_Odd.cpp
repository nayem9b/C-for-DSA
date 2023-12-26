#include <iostream>
using namespace std;

int minOperations(int arr[], int n)
{
    int evenCount = 0, oddCount = 0;

    for (int i = 0; i < n; ++i)
    {
        if (arr[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }

    if (evenCount == oddCount)
    {
        return 0;
    }
    else if ((evenCount + oddCount) % 2 == 1)
    {
        return -1;
    }
    else
    {
        return abs(evenCount - oddCount) / 2;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int arr[100000];
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        int result = minOperations(arr, n);
        cout << result << endl;
    }

    return 0;
}

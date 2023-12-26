#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    bool found = false;
    for (int i = 0; i <= s.length(); i++)
    {
        if (s.find(" Jessica ") != -1)
        {
            found = true;
            break;
        }
    }
    if (found)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}

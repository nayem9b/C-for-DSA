#include <bits/stdc++.h>
using namespace std;
namespace Rakib
{
    int age = 24;
    void hello()
    {
        cout << "hello Rakib namespace" << endl;
    }
    class R
    {
    };
}
namespace Sakib
{
    int age2 = 30;
    void hello2()
    {
        cout << "hello Sakib er namespace" << endl;
    }
    class R
    {
    };
}
using namespace Rakib;
int main()
{

    cout << age << endl;
    cout << Sakib::age2 << endl;
    Sakib::hello2();
    return 0;
}
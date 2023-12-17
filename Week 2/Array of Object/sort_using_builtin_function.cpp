#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
bool cmp(Student a, Student b)
{
    // if (a.marks <= b.marks)
    //     return true;
    // else
    //     return false;
    if (a.marks > b.marks)
        return true;
    else if (a.marks < b.marks)
        return false;
    else
    {
        if (a.roll < b.roll)
        {
            return true;
        }
        else
            return false;
    }
    // return a.marks >= b.marks;
}

int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }
    return 0;
}
// 5 Rifat 10 99 Sifat 11 80 Akib 12 52 Sakib 13 46 Labib 14 64
// Rifat 10 99 Sifat 11 80 Labib 14 64 Akib 12 52 Sakib 13 46
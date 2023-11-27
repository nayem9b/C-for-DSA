#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};
int main()
{
    Student rahim(29, 9, 5.01);
    Student karim(45, 10, 4.33);
    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// class Student
// {
// public:
//     int id;
//     char name;
//     char section;
//     int mark;
//     Student(int id, char name, char section, int mark)
//     {
//         this->id = id;
//         this->name = name;
//         this->section = section;
//         this->mark = mark;
//     }
// };
// int main()
// {
//     Student rahim(1, s, , 50);

//     return 0;
// }
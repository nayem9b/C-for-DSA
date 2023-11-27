// #include <bits/stdc++.h>
// using namespace std;
// class Student
// {
// public:
//     int roll;
//     int cls;
//     double gpa;
//     Student(int roll, int cls, double gpa)
//     {
//         this->roll = roll;
//         this->cls = cls;
//         this->gpa = gpa;
//     }
// };
// int main()
// {
//     // Student rahim(342,10,4.56);
//     Student *karim = new Student(342, 10, 4.56);
//     cout << karim->roll << " " << karim->cls << " " << karim->gpa << endl;
//     return 0;
// }

#include <iostream>

using namespace std;

struct Student
{
    int id;
    string name;
    char section;
    int marks;
};

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        Student highestStudent;
        int highestMarks = 0;

        for (int j = 0; j < 3; j++)
        {
            Student student;
            cin >> student.id >> student.name >> student.section >> student.marks;

            if (student.marks > highestMarks)
            {
                highestStudent = student;
                highestMarks = student.marks;
            }
            else if (student.marks == highestMarks && student.id < highestStudent.id)
            {
                highestStudent = student;
            }
        }

        cout << highestStudent.id << " " << highestStudent.name << " " << highestStudent.section << " " << highestStudent.marks << endl;
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// class Student
// {
// public:
//     int id;
//     string name;
//     char section;
//     int mark;

//     Student(int id, string name, char section, int mark)
//     {
//         this->id = id;
//         this->name = name;
//         this->section = section;
//         this->mark = mark;
//     }
// };

// int main()
// {
//     int id;
//     string name;
//     char section;
//     int mark;
//     // int test;
//     // cin >> test;
//     for (int j = 0; j < 3; ++j)
//     {
//         cin >> id >> name >> section >> mark;
//         for (int k = 0; k < 3; k++)
//         {
//             Student *one = new Student(id, name, section, mark);
//         }
//     }
//     for (int j = 0; j < 3; ++j)
//     {
//         cout << id << " " << name << " " << section << " " << mark << endl;
//     }
//     cin >> id >> name >> section >> mark;

//     // cout << id << " " << name << " " << section << " " << mark << endl;
//     // cout << id << " " << name << " " << section << " " << mark << endl;
//     // cout << id << " " << name << " " << section << " " << mark << endl;
//     Student *one = new Student(id, name, section, mark);
//     Student *two = new Student(id, name, section, mark);
//     Student *three = new Student(id, name, section, mark);

//     cout << two->mark << two->name << endl;

//     // Student highestMarksStudent = students[0];

//     // for (int j = 1; j < 3; ++j)
//     // {
//     //     if (students[j].totalMarks > highestMarksStudent.totalMarks ||
//     //         (students[j].totalMarks == highestMarksStudent.totalMarks && students[j].id < highestMarksStudent.id))
//     //     {
//     //         highestMarksStudent = students[j];
//     //     }
//     // }

//     return 0;
// }

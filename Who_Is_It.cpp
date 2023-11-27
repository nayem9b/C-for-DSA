#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    string name;
    char section;
    int mark;

    Student(int id, string name, char section, int mark)
    {
        this->id = id;
        this->name = name;
        this->section = section;
        this->mark = mark;
    }
};

int main()
{
    int test;
    cin >> test;
    int id, marks;
    string name;
    char section;

    for (int i = 0; i < test; i++)
    {
        Student highestStudent(0, "", ' ', 0);
        int highestMark = 0;

        for (int j = 0; j < 3; j++)
        {
            cin >> id >> name >> section >> marks;

            Student student(id, name, section, marks);

            if (student.mark > highestMark)
            {
                highestStudent = student;
                highestMark = student.mark;
            }
            else if (student.mark == highestMark && student.id < highestStudent.id)
            {
                highestStudent = student;
            }
        }

        cout << highestStudent.id << " " << highestStudent.name << " " << highestStudent.section << " " << highestStudent.mark << endl;
    }

    return 0;
}

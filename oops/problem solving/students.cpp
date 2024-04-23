#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    char section;
    int roll;

protected:
    int english_marks;

private:
    string password;

public:
    void set_marks(int marks)
    {
        english_marks = marks;
    }
    void set_password(string pass)
    {
        password = pass;
    }
    int get_marks()
    {
        return english_marks;
    }
    void update_marks(string studentPass, int studentMarks)
    {
        if (password == studentPass)
        {
            english_marks = studentMarks;
        }
        else
        {
            cout << "Error! Wrong Password" << endl;
        }
    }
};

int main()
{
    int N = 2;
    string name;
    char section;
    int roll;
    int marks;
    string password;

    Student students[N];

    for (int i = 0; i < N; i++)
    {
        cout << "Student " << i + 1 << " info:" << endl;
        cout << "Name: ";
        cin >> name;
        cout << "Section: ";
        cin >> section;
        cout << "Roll: ";
        cin >> roll;
        cout << "Marks: ";
        cin >> marks;
        cout << "password: ";
        cin >> password;

        students[i].name = name;
        students[i].section = section;
        students[i].roll = roll;
        students[i].set_marks(marks);
        students[i].set_password(password);
        cout << endl;
    }

    cout << "=== Students Information ===" << endl;

    for (int i = 0; i < N; i++)
    {
        cout << "Student " << i + 1 << " info:" << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Section: " << students[i].section << endl;
        cout << "Roll: " << students[i].roll << endl;
        cout << "Marks: " << students[i].get_marks() << endl;
        cout << endl;
    }

    int studentRoll, studentMarks, count=0;
    string studentPassword;
    char yesOrNo;

    cout << "Update user marks(y/n): ";
    cin >> yesOrNo;

    if (yesOrNo == 'y')
    {
        cout << "Enter Roll: ";
        cin >> studentRoll;
        cout << "Enter Marks: ";
        cin >> studentMarks;
        cout << "Enter Password: ";
        cin >> studentPassword;
        cout << endl;

        for (int i = 0; i < N; i++)
        {
            if (students[i].roll == studentRoll)
            {
                students[i].update_marks(studentPassword, studentMarks);
                cout << "Student " << i + 1 << " updated info:" << endl;
                cout << "Name: " << students[i].name << endl;
                cout << "Section: " << students[i].section << endl;
                cout << "Roll: " << students[i].roll << endl;
                cout << "Marks: " << students[i].get_marks() << endl;
                cout << endl;
                break;
            }else{
                count++;
            }
        }
        if(count == N){
            cout<<"Sorry! Roll didn't match."<<endl;
        }
    }
}
#include<iostream>
#include<string>
using namespace std;

class Grade{
    private:
    string name;
    string studentClass;
    int rollNumber;
    double marks;

    public:
    Grade(string stdName, string stdClass, int stdRoll, double stdMarks): name(stdName), studentClass(stdClass), rollNumber(stdRoll), marks(stdMarks){}

    string calculateGrade(){
        if(marks >= 80){
            return "A+";
        }
        else if(marks >= 70 && marks < 80){
            return "A";
        }
        else if(marks >= 60 && marks < 70){
            return "A-";
        }
        else if(marks >= 50 && marks < 60){
            return "B";
        }
        else if(marks >= 40 && marks < 50){
            return "C";
        }
        else if(marks >= 33 && marks < 40){
            return "D";
        }
        else{
            return "F";
        }
    }
};

int main(){
    string name;
    string studentClass;
    int rollNumber;
    double marks;

    cout<<"Student Information:"<<endl;
    cout<<"Student Name: ";
    cin>>name;
    cout<<"Student Class: ";
    cin>>studentClass;
    cout<<"Student Roll Number: ";
    cin>>rollNumber;
    cout<<"Student Marks: ";
    cin>>marks;
    cout<<endl<<endl;

    Grade grade(name, studentClass, rollNumber, marks);

    cout<<"Student Name: "<<name<<endl;
    cout<<"Student Class: "<<studentClass<<endl;
    cout<<"Student Roll Number: "<<rollNumber<<endl;
    cout<<"Student Marks: "<<marks<<endl;
    cout<<"Student Grade: "<<grade.calculateGrade()<<endl;

}
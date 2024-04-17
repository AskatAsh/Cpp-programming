#include<iostream>
#include<string>
using namespace std;

class Employee{
    private:
    string name;
    int employeeId;
    double salary;

    public:
    Employee(string empName, int empId, double empSalary): name(empName), employeeId(empId), salary(empSalary) {}

    void calculateSalary(double empRating){
        if(empRating >= 0.0 && empRating <= 1.5){
            salary *= empRating;
        }else{
            cout<<"Invalid Rating. Salary remains unchanged."<<endl;
        }
    }

    void setSalary(double empSalary){
        salary = empSalary;
    }

    string getName() const {
        return name;
    }

    int getEmployeeId() const {
        return employeeId;
    }

    double getSalary() const {
        return salary;
    }

};

int main(){
    string empName;
    int employeeId;
    double salary;

    cout<<"Enter Employee Name: ";
    cin>>empName;

    cout<<"Enter Employee ID: ";
    cin>>employeeId;

    cout<<"Enter Employee Salary: ";
    cin>>salary;

    Employee emp(empName, employeeId, salary);

    cout<<"Employee Initial Salary: "<<emp.getSalary()<<endl;

    double empRating;
    cout<<"Enter Employee Performance Rating(0.0 ~ 1.4): ";
    cin>>empRating;

    emp.calculateSalary(empRating);

    cout<<"Employee Updated Salary: "<<emp.getSalary()<<endl;
}
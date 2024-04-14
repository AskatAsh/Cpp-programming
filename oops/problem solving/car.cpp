#include<iostream>
#include<string>
using namespace std;

class Car{
    private:
    string company;
    string model;
    int year;

    public:
    void setCompany(string c){
        company = c;
    }
    void setModel(string m){
        model = m;
    }
    void setYear(int y){
        year = y;
    }

    string getCompany(){
        return company;
    }
    string getModel(){
        return model;
    }
    int getYear(){
        return year;
    }
};

int main(){
    string company, model;
    int year;
    cout<<"Enter Company, Model and Year: ";
    cin>>company>>model>>year;

    Car car;
    car.setCompany(company);
    car.setModel(model);
    car.setYear(year);

    cout<<"Company Name: "<<car.getCompany()<<endl;
    cout<<"Model Name: "<<car.getModel()<<endl;
    cout<<"Year: "<<car.getYear()<<endl;

}
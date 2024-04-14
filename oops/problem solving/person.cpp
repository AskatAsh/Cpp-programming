#include<iostream>
#include<string>
using namespace std;
class Person{
    private:
    string name;
    int age;
    string country;

    public:
    void setName(string n){
        name = n;
    }
    void setAge(int a){
        age = a;
    }
    void setCountry(string c){
        country = c;
    }

    string getName(){
        return name;
    }
    int getAge(){
        return age;
    }
    string getCountry(){
        return country;
    }
};

int main(){
    string name, country;
    int age;
    cout<<"Enter name, age & country: ";
    cin>> name >> age >> country;

    Person p;
    p.setName(name);
    p.setAge(age);
    p.setCountry(country);

    cout<<"Name: "<<p.getName()<<endl;
    cout<<"Age: "<<p.getAge()<<endl;
    cout<<"Country: "<<p.getCountry()<<endl;
}
#include <iostream>
#include <string>
using namespace std;

class Parent
{
public:
    int x;

private:
    int y;

protected:
    int z;

public:
    Parent(int a, int b, int c) {
        x = a; y = b; z = c;
    };
};

class Child : public Parent
{
public:
    int xx;
    Child(int aa, int a, int b, int c) : Parent(a, b, c)
    {
        xx = aa;
    }
    void tellme()
    {
        cout << "Inherited protected Data: " << z << endl;
    }
};

int main()
{
    Parent pt(10, 20, 30);
    Child ch(99, 10, 20, 30);

    cout << "Child: " << ch.xx << endl;
    ch.tellme();
}
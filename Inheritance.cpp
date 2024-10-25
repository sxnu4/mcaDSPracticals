#include <bits/stdc++.h>
using namespace std;
class Base
{
    string brand;

public:
    void setBrand(string b) { brand = b; }
    void getBrand(void)
    {
        cout << "Brand is " << brand << endl;
    }
};
class Child : public Base
{
    string name;

public:
    void setName(string n) { name = n; }
    void getName(void)
    {
        cout << "Name of car is " << name << endl;
    }
};
class Child2 : public Child
{
    string model;

public:
    void setModel(string m);
    void getModel();
};
void Child2::setModel(string m)
{
    model = m;
}
void Child2::getModel()
{
    cout << "And this car's model is " << model << endl;
}
int main()
{
    Child2 b1, b2, b3;
    b1.setBrand("TaTa");
    b1.getBrand();
    b2.setName("Safari");
    b2.getName();
    b3.setModel("2020");
    b3.getModel();

    return 0;
}
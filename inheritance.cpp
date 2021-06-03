//single inheritance..
#include <iostream>

using namespace std;

class Base
{
public:
    int x;
    void show()
    {
        cout<<"Base "<<x<<endl;
    }
};
class Derived: public Base
{
public:
    int y;
    void display()
    {
        cout<<"Derived "<<y<<endl;
    }
};
int main()
{
    Base b;
    b.x=10;
    b.show();
    Derived d;
    d.x=12;
    d.y=15;
    d.display();
    d.show();
}

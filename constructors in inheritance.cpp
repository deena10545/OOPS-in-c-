#include <iostream>

using namespace std;

class base
{
public:
    base()
    {
        cout<<"default base";
    }
    base(int x)
    {
        cout<<"para base";
    }
};
class derived : public base
{
public:
    derived()
    {
        cout<<"default derived";
    }
    derived(int a)
    {
        cout<<"para derived";
    }
    derived(int x, int a) : base(x)
    {
        cout<<"para derived";
    }
};
int main()
{
    derived d1(10);
    cout<<endl;
    derived d2(10,20);
}

#include <iostream>

using namespace std;
class base
{
public:
    virtual void fun();
};
class derived : public base
{
public:
    void fun();
};
void base :: fun()
{
    cout<<"base";
}
void derived :: fun()
{
    cout<<"Derived";
}
int main()
{
    base *p=new derived();
    p->fun();
}

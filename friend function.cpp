#include <iostream>

using namespace std;

class test
{
private:
    int a;
public:
    int b;
protected:
    int c;
friend void fun();
};
void fun()
{
    test t;
    t.a=10;
    t.b=15;
    t.c=20;
    cout<<t.a<<endl<<t.b<<endl<<t.c;
}
int main()
{
    fun();
}

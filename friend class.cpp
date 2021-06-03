#include <iostream>

using namespace std;
class test1;
class test
{
private:
    int a=10;
friend test1;
};
class test1
{
public:
    test t;
    void fun()
    {
        cout<<t.a;
    }
};
int main()
{
    test1 t1;
    t1.fun();
}

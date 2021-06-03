#include <iostream>

using namespace std;
int division(int,int);
int main()
{
    int a=5,b=0,c=15;
    try
    {
        c=division(a,b);
        cout<<c;
    }
    catch(string n)
    {
        cout<<"Division by zero"<<n;
    }
    catch(float n)
    {
        cout<<"float";
    }
    catch (...)
    {
        cout<<"All catch";
    }
}
int division(int x,int y)
    {
        if(y==0)
            throw string ("deena");
        return x/y;
    }

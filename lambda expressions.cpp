#include <iostream>

using namespace std;

int main()
{
    [](){cout<<"Hello"<<endl;}();
    [](int x,int y){cout<<"sum:"<<x+y<<endl;}(10,5);
    int a=10,b=15;
    [a,b](){cout<<a<<" "<<b<<endl;}();
    [&](){cout<<++a<<" "<<++b;}();
}

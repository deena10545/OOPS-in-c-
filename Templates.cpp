#include <iostream>

using namespace std;

template <class T, class R>
void maxi(T x,R y)
{
        cout<<(x>y?x:y);
}
int main()
{
    maxi(10,20.5);
}

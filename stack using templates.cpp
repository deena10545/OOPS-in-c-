#include <iostream>

using namespace std;

template <class T>
class stack
{
    T *stk;
    int top;
    int size;
public:
    stack(int size)
    {
        this->size=size;
        top=-1;
        stk=new T[size];
    }
    void push(T x)
    {
        if(top==size-1)
            cout<<"stack is full";
        else
        {
            top++;
            stk[top]=x;
        }
    }
    T pop()
    {
        T x=0;
        if(top==-1)
            cout<<"stack is empty";
        else
        {
            x=stk[top];
            top--;
        }
        return x;
    }
    void display()
    {
        cout<<stk[top];
    }
};
int main()
{
    stack<float> s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.pop();
    s.pop();
    s.display();
}

#include <iostream>

using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
public:
    Rectangle(int length=0,int breadth=0)
    {
        this->length=length;
        this->breadth=breadth;
    }
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
    inline Rectangle(Rectangle &r);
};
Rectangle::Rectangle(Rectangle &r)
{
    length=r.length;
    breadth=r.breadth;
    cout<<length<<endl<<breadth;
}
int main()
{
    Rectangle r(10,5);
    cout<<"The area of rectangle "<<r.area()<<endl;
    cout<<"The perimeter of a rectangle "<<r.perimeter()<<endl;
    Rectangle r2(r);
}

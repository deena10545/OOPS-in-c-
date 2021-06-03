#include <iostream>

using namespace std;

class rectangle
{
private:
    int length;
    int breadth;
public:
    rectangle(int l=0, int b=0)
    {
        setlength(l);
        setbreadth(b);
    }
    void setlength(int l)
    {
        length=l;
    }
    void setbreadth(int b)
    {
        breadth=b;
    }
    int getlength()
    {
        return length;
    }
    int getbreadth()
    {
        return breadth;
    }
    int area();
    int perimeter()
    {
        return 2*(length+breadth);
    }
};
int rectangle :: area()
{
    return length*breadth;
}
class cuboid: public rectangle
{
private:
    int height;
public:
    cuboid(int l=0, int b=0, int h=0)
    {
        setlength(l);
        setbreadth(b);
        height=h;
    }
    int volume()
    {
        return getlength()*getbreadth()*height;
    }

};
int main()
{
    cuboid c(5,10,15);
    cout<<c.getlength()<<endl;
    cout<<c.getbreadth()<<endl;
    cout<<c.area()<<endl;
    cout<<c.perimeter()<<endl;
    cout<<c.volume()<<endl;
}

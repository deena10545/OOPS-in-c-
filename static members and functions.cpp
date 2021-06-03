#include <iostream>

using namespace std;

class student
{
public:
    int roll;
    string name;
    static int addNo;
    student(string n)
    {
        addNo++;
        roll=addNo;
        name=n;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl<<"Roll:"<<roll<<endl;
    }
    static int getcount()
    {
        return addNo;
    }
};
int student :: addNo=0;
int main()
{
    student s1("john");
    student s2("deena");
    student s3("hari");
    s1.display();
    s2.display();
    s3.display();
    cout<<"Number admission "<<student::getcount();
}

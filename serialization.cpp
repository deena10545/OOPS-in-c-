#include <iostream>
#include <fstream>
using namespace std;

class student
{
public:
    string name;
    int roll;
    string branch;
    friend ofstream &operator<<(ofstream &ofs, student &s);
};
ofstream &operator<<(ofstream &ofs, student &s)
{
    ofs<<s.name<<endl;
    ofs<<s.roll<<endl;
    ofs<<s.branch<<endl;
    return ofs;
}
int main()
{
    student s;
    s.name="Deena",s.roll=10;s.branch="IT";
    ofstream ofs("student.txt");
    ofs<<s;
    ofs.close();
}

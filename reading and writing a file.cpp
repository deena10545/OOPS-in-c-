#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outfile("my.txt");
    outfile<<"Hello"<<endl;
    outfile<<25<<endl;
    outfile.close();
    ifstream infile;
    infile.open("my.txt");
    if(!infile)
        cout<<"File cannot be opened";
    else
    {
        string str;
        int x;
        infile>>str;
        infile>>x;
        cout<<str<<" "<<x;
    }
    if(infile.eof())
        cout<<"end";
    infile.close();
}

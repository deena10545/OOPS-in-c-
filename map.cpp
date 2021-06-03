#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int,string> m;
    m.insert(pair<int,string> (1,"Deena"));
    m.insert(pair<int,string> (2,"peter"));
    m.insert(pair<int,string> (3,"john"));
    m.insert(pair<int,string> (4,"hari"));
    map<int,string> :: iterator i;
    for(i=m.begin();i!=m.end();i++)
        cout<<i->first<<" "<<i->second<<endl;
    map<int,string> :: iterator i1;
    i1=m.find(2);
    cout<<i1->first<<" "<<i1->second<<endl;
}

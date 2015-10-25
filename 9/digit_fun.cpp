/*#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <cctype>
using namespace std;

int length(int number)
{
    ostringstream os;
    os<<number;
    string num=os.str();
    return num.size();
}

int smallestLength(int number)
{
    vector<int> list;
    list.push_back(number);
    list.push_back(length(number));
    while(list.at(list.size()-1)!=list.at(list.size()-2))
        list.push_back(length(list.at(list.size()-1)));
    return list.size()-1;
}

void Run()
{
    long number;
    vector<int> list;
    cin>>number;
    while(to_string(number)!="END")
    {
        list.push_back(number);
        cin>>number;
    }

    for(vector<int>::iterator it=list.begin(); it!=list.end(); ++it)
        cout<<smallestLength(*it)<<endl;

    return;
}


int main()
{
    Run();
    return 0;
}*/



/*#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

struct time
{
    time(int b,int p):value(b),pos(p){}
    int value,pos;
};


int max(vector<int> amounts,vector<int> starts,vector<int> ends)
{
    int max=0;
    int oldmax=0;

    map<int,int> temp;
    for(unsigned i=0; i<starts.size(); ++i)
        if(temp.find(starts.at(i))!=temp.end())
            temp.insert(pair<int,int>(starts.at(i),i));
    return max;
}

void Run()
{
    vector<int> max_revenue;
    int t=0;
    cin>>t;
    for(int i=0; i<t; ++i)
    {
        vector<int> amounts;
        vector<int> starts;
        vector<int> ends;
        int N=0;
        cin>>N;
        for(int j=0; j<N; ++j)
        {
            int Bs,Be,A;
            cin>>Bs>>Be>>A;
            starts.push_back(Bs);
            ends.push_back(Be);
            amounts.push_back(A);
        }
        max_revenue.push_back(max(amounts,starts,ends));
    }

    for(int k=0; k<t; ++k)
        cout<<max_revenue.at(k)<<endl;
    return;
}


int main()
{
    Run();
    return 0;
}*/

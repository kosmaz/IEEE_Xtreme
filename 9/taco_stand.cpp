/*#include <iostream>
#include <algorithm>
using namespace std;


int tacos(long shell,long meat,long rice, long beans)
{
    int tacos=0;
    vector<long> array={meat,rice,beans};
    sort(array.begin(),array.end());
    tacos=array.at(1);
    int left=array.at(2)-array.at(1);
    if(left>array.at(0))
        tacos+=array.at(0);
    else
        tacos+=left;
    if(tacos>shell)
        return shell;
    else
        return tacos;
}

void Run()
{
    int n=0;
    cin>>n;
    for(int i=0; i<n; ++i)
    {
        long s,m,r,b;
        cin>>s>>m>>r>>b;
        cout<<tacos(s,m,r,b)<<endl;
    }
    cout<<endl;
    return;
}


int main()
{
    Run();
    return 0;
}*/

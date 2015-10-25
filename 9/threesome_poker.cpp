/*#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct threesome
{
    threesome(int a,int b, int c):a(a),b(b),c(c){}
    int a,b,c;
};

vector<threesome> poker(int a, int b, int c,string& lexi)
{
    vector<threesome> shortest;
    while(a!=0 && b!=0 && c!=0)
    {
        vector<int> array={a,b,c};
        sort(array.begin(),array.end());
        if(array.at(0)==array.at(1) || array.at(0)==array.at(2) || array.at(2)==array.at(1))
        {

        }
        else
        {
            if(array.at(2)==b && array.at(1)==a)
            {
                b-=a;
                a+=a;
                lexi.push_back('1');
                lexi.push_back('2');
            }
            else if(array.at(2)==a && array.at(1)==b)
            {
                a-=b;
                b+=b;
                lexi.push_back('2');
                lexi.push_back('1');
            }
            else if(array.at(2)==a && array.at(1)==c)
            {
                a-=c;
                c+=c;
                lexi.push_back('3');
                lexi.push_back('1');
            }
            else if(array.at(2)==c && array.at(1)==a)
            {
                c-=a;
                a+=a;
                lexi.push_back('1');
                lexi.push_back('3');
            }
            else if(array.at(2)==b && array.at(1)==c)
            {
                b-=c;
                c+=c;
                lexi.push_back('3');
                lexi.push_back('2');
            }
            else if(array.at(2)==c && array.at(1)==b)
            {
                c-=b;
                b+=b;
                lexi.push_back('2');
                lexi.push_back('3');
            }
        }
        shortest.push_back(threesome(a,b,c));
    }
    return shortest;
}

vector<threesome> evaluate(int a,int b,int c)
{
    vector<string> lexic;
    for(int i=0; i<6; ++i)
        lexic.push_back("");
    vector<vector<threesome>> list;
    list.push_back(poker(a,b,c,lexic.at(0)));
    list.push_back(poker(a,c,b,lexic.at(1)));
    list.push_back(poker(b,a,c,lexic.at(2)));
    list.push_back(poker(b,c,a,lexic.at(3)));
    list.push_back(poker(c,b,a,lexic.at(4)));
    list.push_back(poker(c,a,b,lexic.at(5)));

    vector<threesome> temp;
    if(!(list.at(0).size()>=11 && list.at(1).size()>=11 && list.at(2).size()>=11 && list.at(3).size()>=11 && list.at(4).size()>=11 && list.at(5).size()>=11))
    {
        for(int i=0; i<5; ++i)
            if(lexic.at(i).compare(lexic.at(i+1))==-1)
                temp=list.at(i);
    }
    return temp;
}

void Run()
{
    int a,b,c;
    cin>>a>>b>>c;
    vector<threesome> temp=evaluate(a,b,c);
    if(temp.size()>=11)
        cout<<"OK"<<endl;
    else
    {
        cout<<a<<' '<<b<<' '<<c<<endl;
        for(vector<threesome>::iterator it=temp.begin(); it!=temp.end(); ++it)
            cout<<it->a<<' '<<it->b<<' '<<it->c<<endl;
    }
    return;
}


int main()
{
    Run();
    return 0;
}*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void zoomIn(const string& characters, const vector<vector<string>>& zoom, const vector<char>& ascii,int rows)
{
    vector<int> cont;
    int K=0;
    for(unsigned i=0; i<characters.size(); ++i)
    {
        for(unsigned k=0; k<ascii.size(); ++k)
            if(ascii.at(k)==characters.at(i))
            {
                ++K;
                cont.push_back(k);
                cout<<zoom.at(k).at(0);
                break;
            }
        if(K==zoom.size())
            break;
    }
    cout<<endl;

    for(int l=1; l<rows; ++l)
    {
        for(unsigned m=0; m<cont.size(); ++m)
            cout<<zoom.at(cont.at(m)).at(l);
        cout<<endl;
    }
    //cout<<endl;
    return;
}

void Run()
{
    vector<vector<string>> zoom;
    vector<char> ascii;
    vector<string> strings;
    int columns;
    int rows;
    int K;
    cin>>columns;
    cin>>rows;
    cin>>K;
    for(int i=0; i<K; ++i)
    {
        char temp;
        cin>>temp;
        ascii.push_back(temp);
        vector<string> temp_zoom;
        cin.ignore();
        for(int j=0; j<rows; ++j)
        {
            string temp_str;
            getline(cin,temp_str);
            temp_zoom.push_back(temp_str);
        }
        zoom.push_back(temp_zoom);
    }
    int X=0;
    cin>>X;
    cin.ignore();
    for(int k=0; k<X; ++k)
    {
        string  characters;
        getline(cin,characters,'\n');
        strings.push_back(characters);
    }

    for(int l=0; l<X; ++l)
        if(strings.at(l).size()>0)
            zoomIn(strings.at(l),zoom,ascii,rows);
        else
        {
            for(int m=0; m<rows; ++m)
                cout<<endl;
            //cout<<endl;
        }
    return;
}


int main()
{
    Run();
    return 0;
}

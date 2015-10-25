/*#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

struct player
{
    player(string nm,int p1,int p2, int ts):name(nm),predicted1(p1),predicted2(p2),totalScore(ts){}
    string name;
    int predicted1;
    int predicted2;
    int totalScore;
};

struct score
{
    score(int s1,int s2):score1(s1),score2(s2){}
    int score1;
    int score2;
};

inline int scoreTeam(int score, int predicted)
{
    int score=5-abs(score-predicted);
    if(score>0)
        return score;
    else
        return 0;
}

inline int pointSpread(int score1,int score2,int predicted1,int predicted2)
{
    int score=5-abs((predicted1-predicted2)-(score1-score2));
    if(score>0)
        return score;
    else
        return 0;
}

inline int winner(int score1,int score2,int predicted1,int predicted2)
{
    if((score1>score2 && predicted1>predicted2) || (score1<score2 && predicted1<predicted2))
        return 10;
    return 0;
}

inline int totalScore(const player& plyr,const score& scr)
{
    return (scoreTeam(scr.score1,plyr.predicted1)+
            scoreTeam(scr.score2,plyr.predicted2)+
            pointSpread(scr.score1,scr.score2,plyr.predicted1,plyr.predicted2)+
            winner(scr.score1,scr.score2,plyr.predicted1,plyr.predicted2));
}

string predictor(vector<player>& players,const vector<vector<score>>& players_prediction,const vector<score>& scores)
{
    string name;
    int best=0;
    int unknowns=0;
    vector<int> unknown_pos;
    for(unsigned i=0; i<players.size(); ++i)
    {
        for(unsigned j=0; j<scores.size(); ++j)
        {
            if(scores.at(j).score1==-1)
            {
                ++unknowns;
                unknown_pos.push_back(j);
            }
            else
            {
                players.at(i).predicted1=players_prediction.at(i).at(j).score1;
                players.at(i).predicted2=players_prediction.at(i).at(j).score2;
                players.at(i).totalScore=totalScore(players.at(i),scores.at(j));
                if(best<players.at(i).totalScore)
                    name=players.at(i).name;
            }
        }
    }

    if(unknowns>0)
    {
        for(unsigned k=0; k<unknown_pos.size(); ++k)
        {

        }
    }
    return name;
}

void Run()
{
    vector<string> winners;

    int t=0;
    cin>>t;
    for(int i=0; i<t; ++i)
    {
        vector<player> players;
        vector<vector<score>> players_prediction;
        vector<score> scores;
        int p,c;
        cin>>p>>c;
        for(int j=0; j<p; ++j)
        {
           string name;
           getline(cin,name);
           players.push_back(player(name,0,0,0));

           vector<score> temp_player_predict;
           for(int k=0; k<c; ++k)
           {
                int p1,p2;
                cin>>p1>>p2;
                temp_player_predict.push_back(score(p1,p2));
           }
           players_prediction.push_back(temp_player_predict);
        }

        for(int l=0; l<c; ++l)
        {
            string p1,p2;
            getline(cin,p1,' ');
            getline(cin,p2,'\n');
            if(p1=="?")
                scores.push_back(score(-1,-1));
            else
                scores.push_back(score(stoi(p1),stoi(p2)));
        }
        winners.push_back(predictor(players,players_prediction,scores));
    }
    for(int i=0; i<t; ++i)
        cout<<winners.at(i)<<endl;
    return;
}


int main()
{
    Run();
    return 0;
}*/

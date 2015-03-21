#include <iostream>
#include <vector>
using namespace std;

int compute(vector<int> data, int total)
{
	int max_speed,temp_max_speed;
	max_speed=temp_max_speed=total;
	for(int i=0; i<data.size()-1; ++i)
	{
		temp_max_speed-=data[i];
		if(temp_max_speed>max_speed)max_speed=temp_max_speed;
	}
	if(max_speed<0)return 0;
	else return max_speed;
}

void Run()
{
	//enter the value of N
	int N;
	cin>>N;
	int total=0;
	vector<int> data;
	//enter the value of slope for each hill part
	for(int i=0; i<N; ++i)
	{
		int slope; cin>>slope;
		total+=slope;
		data.push_back(slope);
	}
	cout<<compute(data,total);
	return;
}

int main()
{
	Run();
	return 0;
}
#include <vector>
#include <algorithm>
#include <cstdio>
#include <fstream>
using namespace std;

long smallest_k(vector<long>& data, long m, long k)
{
	long small_k=400000000;
	for(unsigned int i=0; i<data.size(); ++i)
	{
		if(i+m>data.size()-1)
		{
			register long temp=(i+m)-data.size();
			vector<long> temp_v=data;
			temp_v.erase(temp_v.begin()+temp+1,temp_v.begin()+i-1);
			sort(temp_v.begin(),temp_v.end());
			//printf("%ld ",temp_v[k]);
			if(small_k>temp_v[k])small_k=temp_v[k];
			continue;
		}
		vector<long> temp_v=data;
		for(register unsigned j=i; j<=(i+m); ++j)
			temp_v.push_back(data[j]);
		sort(temp_v.begin(),temp_v.end());
	  //printf("%ld ",temp_v[k]); 	
		if(small_k>temp_v[k])small_k=temp_v[k];
	}
	return small_k;
}

void Run()
{
	ifstream in("kvalue3-1.txt",ios::in);
	//enter value of N,M & K
	long N,M,K;
	//(void)scanf("%ld %ld %ld",&N,&M,&K);
	in>>N>>M>>K;
	vector<long> data;
	//enter N no of integers
	for(int i=0; i<N; ++i)
	{
		register long temp;
		//(void)scanf("%ld",&temp);
		in>>temp;
		data.push_back(temp);
	}
	printf("%ld\n",smallest_k(data,M,K));
	return;
}

int main()
{
	Run();
	return 0;
}
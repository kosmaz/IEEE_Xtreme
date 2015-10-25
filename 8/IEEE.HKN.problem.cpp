#include <iostream>
#include <bitset>
#include <string>
#include <math.h>
using namespace std;

void run_through(long a, long b, long& count,bool sw=false)
{
	for(long k=a; k<=b; ++k)
	{
		bitset<32> value(k);
		string word=value.to_string();
		string conversion;
	  for(int i=0; i<word.size(); ++i)
		 if(word[i]=='1')
		 {conversion=word.substr(i);	break;}
	  string reversed;
	  for(int i=conversion.size()-1,j=0; i>=0; --i,++j)
		 reversed.insert(j,1,conversion[i]);
	  if(conversion.compare(reversed)==0)if(sw==false)--count; else ++count;
	}
	return;
}

long bit_count(long long a, long long b)
{
	long count=0;
	if((b-a)==0){run_through(a,b,count,true); return count;}
	if(a==0){++count; ++a;}
	struct bit_table{long long min; long long max; long long bits;}data[32];
	int equate=0;
	for(int i=0; i<32; ++i)
	{
		data[i].min=pow(2,i); data[i].max=pow(2,i+1); 
		if(i==0)data[i].bits=1;
    else data[i].bits=data[i+1].bits=data[equate].min; ++i;
		data[i].min=pow(2,i); data[i].max=pow(2,i+1);
		if(i==1)data[i].bits=1;
    else data[i].bits=data[i+1].bits=data[equate].min;++equate;	
	}
	for(int j=0; j<32; ++j)
	{
	if(a==data[j].min)
	{
		count+=data[j].bits; int temp_count=0;
		for(int k=j; k<32; ++k)
		{
			if(b<data[k].max){if((b%2)!=0)++b; run_through(b,data[k].max,count); goto pt0;}
			if(b==data[k].max)goto pt0;
			++temp_count;
		}
		pt0:
		if(temp_count>0)for(int l=j+1; l<=(j+temp_count); ++l)count+=data[l].bits;
		return count;
	}
	if(a>data[j].min || j==31)
	{
		count+=data[j].bits; int temp_count=0;
		if((a%2)!=0)--a;
		run_through(data[j].min,a,count);
		for(int k=j; k<32; ++k)
		{
			if(b<data[k].max){if((b%2)!=0)++b; run_through(b,data[k].max,count); goto pt1;}
			if(b==data[k].max)goto pt1;
			++temp_count;
		}
		pt1:
		if(temp_count>0)for(int l=j+1; l<=(j+temp_count); ++l)count+=data[l].bits;
		return count;
	}		
	}
	return count;
}


void Run()
{
	//enter the value of range a-b
	string range;
	getline(cin,range);
	long long a,b;
	a=b=0;
	for(int i=0; i<range.size(); ++i)
	{
		if(range[i]==',')
		{
			for(int j=i+1; j<range.size(); ++j){b*=10; b+=(range[j]-48);}
			break;
		}
		a*=10; a+=(range[i]-48);
	}
  cout<<bit_count(a,b);
	return;
}

int main()
{
	Run();
	return 0;
}
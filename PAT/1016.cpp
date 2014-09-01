#include <iostream>
#include <string>
using namespace std;

int str_to_int(string str);

int main()
{
	string A,B;
	int DA,DB;
	string PA,PB;

	cin>>A>>DA>>B>>DB;

	for(int i=0;i!=A.size();i++)
	{
		if(A[i]-'0'==DA)
		{PA.push_back(A[i]);}
	}
	for(int i=0;i!=B.size();i++)
	{
		if(B[i]-'0'==DB)
		{PB.push_back(B[i]);}
	}

	cout<<str_to_int(PA)+str_to_int(PB);

	
	system("pause");
	return 0;
}

int str_to_int(string str)
{
	if(str.size()==0)
	{return 0;}
	string::iterator it;
	int i;
	int sum=0;
	for(i=1,it=str.begin();it!=str.end();it++,i*=10)
	{
		sum+=(*it-'0')*i;
	}
	return sum;
}
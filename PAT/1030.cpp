//4‘À––≥¨ ±
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int N;
	long p;
	cin>>N>>p;
	vector<long> list;
	for(int i=0;i!=N;i++)
	{long temp;cin>>temp;list.push_back(temp);}
	sort(list.begin(),list.end());
	bool flag=false;
	for(int i=0;i!=N;i++){if(!flag){
	for(int j=0;j!=i+1;j++){
		if(list[j+N-i-1]<=list[j]*p)
		{cout<<N-i<<endl;flag=true;break;}
	}}}

	system("pause");
	return 0;
}
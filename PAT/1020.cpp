#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

class Mooncake
{
public:
	int store;
	double value;
	double unit_price;
};

bool comp(const Mooncake a,const Mooncake b);

int main()
{
	vector<Mooncake> Cakes;
	int N,S;
	cin>>N>>S;
	for(int i=0;i!=N;i++)
	{
		Mooncake temp;
		cin>>temp.store;
		Cakes.push_back(temp);
	}
	for(int i=0;i!=N;i++)
	{
		cin>>Cakes[i].value;
		Cakes[i].unit_price=Cakes[i].value/Cakes[i].store;
	}
	
	sort(Cakes.begin(),Cakes.end(),comp);

	//for(int i=0;i!=N;i++){cout<<Cakes[i].unit_price<<' ';}cout<<endl;

	double income=0;
	double sum=0;
	vector<Mooncake>::iterator it;
	for(it=Cakes.begin();sum<S&&it!=Cakes.end();it++)
	{
		sum+=it->store;
		income+=it->value;
	}
	if(sum<S)
	{cout<<income<<endl;}
	else
	{
		income-=(sum-S)*((it-1)->unit_price);
		cout<<fixed<<setprecision(2)<<income<<endl;
	}

	system("pause");
	return 0;
}

bool comp(const Mooncake a,const Mooncake b)
{
	return (a.unit_price>b.unit_price);
}
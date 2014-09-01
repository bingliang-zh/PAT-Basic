#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N,M;
	cin>>N>>M;
	vector<int> Circle;
	for (int i=0;i!=N;i++)
	{
		int temp;
		cin>>temp;
		Circle.push_back(temp);
	}
	vector<int>::iterator it;
	it=Circle.end()-M%N;
	cout<<*it;
	it++;
	for (;it!=Circle.end();it++)
	{cout<<' '<<*it;}
	for (it=Circle.begin();it!=Circle.end()-M%N;it++)
	{cout<<' '<<*it;}

	system("pause");
	return 0;
}
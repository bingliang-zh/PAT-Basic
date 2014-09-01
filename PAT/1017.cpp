#include <iostream>
#include <string>
using namespace std;

int main()
{
	string A;
	int B;
	string Q;
	int R;

	cin>>A>>B;
	int temp=0;
	for(int i=0;i!=A.size();i++)
	{
		int q,r;
		q=(temp*10+A[i]-'0')/B;
		r=(temp*10+A[i]-'0')%B;
		Q.push_back('0'+q);
		temp=r;
	}

	int i;

	for(i=0;Q[i]=='0';i++)
	{;}

	for(;i!=Q.size();i++)
	{cout<<Q[i];}


	cout<<' '<<temp;

	system("pause");
	return 0;
}
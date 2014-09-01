#include <iostream>
#include <string>
using namespace std;

void B(int n)
{
	for (int i=0;i!=n;i++)
	{cout<<'B';}
}

void S(int n)
{
	for (int i=0;i!=n;i++)
	{cout<<'S';}
}

void G(int n)
{
	if (n<=0||n>=10)
	{;}//Ö±½Ó½áÊø
	else
	{
		for (int i=1;i<=n;i++)
		{cout<<i;}
	}
}

int main()
{
	string Input;
	string Output;
	cin>>Input;
	string::iterator it;
	if(Input.size()==1)
	{
		it=Input.begin();
		G(*it-'0');
	}
	if(Input.size()==2)
	{
		it=Input.begin();
		S(*it-'0');
		it++;
		G(*it-'0');
	}
	if(Input.size()==3)
	{
		it=Input.begin();
		B(*it-'0');
		it++;
		S(*it-'0');
		it++;
		G(*it-'0');
	}
	system("pause");
	return 0;
}


#include <iostream>
using namespace std;

int main()
{
	long int A,B,C;
	int T;
	bool result[10];
	cin>>T;
	for(int i=0;i!=T;i++)
	{
		cin>>A>>B>>C;
		if (A>0&&B>0&&A+B<0)
		{result[i]=true;}
		else if (A<0&&B<0&&A+B>0)
		{result[i]=false;}
		else if (A+B>C)
		{result[i]=true;}
		else
		{result[i]=false;}
	}
	for(int i=0;i!=T;i++)
	{
		cout<<"Case #"<<i+1<<": ";
		if (result[i]==true)
		{cout<<"true"<<endl;}
		else
		{cout<<"false"<<endl;}
	}
	system("pause");
	return 0;
}
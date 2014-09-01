#include <iostream>
using namespace std;

bool isOdd(int n)
{
	if(n<=1||n>=1E5)
	{return false;}

	for(int i=2;i!=n/2+1;i++)
	{if (n%i==0) return false;}

	return true;
}

int main()
{
	//for(int i=0;i!=15;i++)
	//{cout<<i<<' '<<isOdd(i)<<endl;}
	//system("pause");
	int count=0;
	int N;
	cin>>N;
	for(int i=3;i<=N-2;i+=2)
	{
		if (isOdd(i))
		{
			if(isOdd(i+2))
				count++;
		}
	}
	cout<<count<<endl;

	return 0;
}

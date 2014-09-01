#include <iostream>
using namespace std;

int Callatz(int n);
int i;
int main()
{
	i = 0;
	int number;
	cin>>number;
	int k = Callatz(number);
	if (k>=0)
	{
	cout<<k<<endl;
	return 0;
	}
	else
		return 1;
}
int Callatz(int n)
{
	if (n<=0)
		{cout<<"Input number out of range!";return -1;}
	else if (n == 1)
		{return i;}
	else if (n%2==0)
		{n/=2;i++;return Callatz(n);}
	else
	{
		n = (3*n+1)/2;
		i++;
		return Callatz(n);
	}
}
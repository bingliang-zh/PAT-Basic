#include<iostream>
using namespace std;
int main()
{
	int N[10]={0};
	for(int i=0;i!=10;i++)
	{cin>>N[i];}
	int sum=0;
	for(int i=1;i!=10;i++)
	{sum+=N[i];}
	if(sum==0)
	{cout<<'0'<<endl;system("pause");return 0;}//如果1-9的个数都是0
	int i;
	for(i=1;N[i]==0;i++){}
	N[i]--;
	cout<<i;
	for(int i=0;i!=10;)
	{
		if(N[i]==0){i++;}
		else
		{
			N[i]--;
			cout<<i;
		}
	}
	system("pause");
	return 0;
}
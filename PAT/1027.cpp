#include<iostream>
#include<cmath>
using namespace std;

void Print_N_Stars(int n,char ch);
int main()
{
	int N;
	char ch;
	cin>>N>>ch;

	int K=sqrt((N+1)/2);
	for(int i=0;i!=K;i++)
	{
		int t=(K-i)*2-1;
		Print_N_Stars(i,' ');
		Print_N_Stars(t,ch);
		cout<<endl;
	}
	for(int i=K-2;i>=0;i--)
	{
		int t=(K-i)*2-1;
		Print_N_Stars(i,' ');
		Print_N_Stars(t,ch);
		cout<<endl;
	}
	cout<<N-(K*K*2-1)<<endl;

	system("pause");
	return 0;
}
void Print_N_Stars(int n,char ch)
{
	for(int i=0;i!=n;i++){cout<<ch;}
}
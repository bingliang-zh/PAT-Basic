#include <iostream>
#include <vector>
using namespace std;

bool InsertPrime(int N);
bool isPrime(vector<int> Primes,int Number);

vector<int> Primes;
int main()
{
	int M,N;

	cin>>M>>N;//M&N<=10^4
	if (M>N||N>1E4||M<=0)
	{return 1;}

	for(int i=0;i!=N;i++)
	{InsertPrime(i);}

	
	cout<<Primes[M-1];
	int circle=1;
	for(int i=M;i<=N-1;i++,circle++)
	{
		if (circle%10!=0)
		{cout<<' ';}
		else
		{cout<<endl;}
		cout<<Primes[i];
	}

	system("pause");
	return 0;
}

bool InsertPrime(int N)
{
	if(N==0){Primes.push_back(2);return true;}
	int max_Prime=*(Primes.end()-1);
	while(true)
	{
		max_Prime++;
		if(isPrime(Primes,max_Prime))
		{Primes.push_back(max_Prime);return true;}		
	}
}

bool isPrime(vector<int> Primes,int Number)
{
	for(int i=0;i!=Primes.size();i++)
	{if(Number%Primes[i]==0)return false;}
	return true;
}
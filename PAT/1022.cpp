#include<iostream>
#include<vector>
using namespace std;

int main()
{
	unsigned long int A,B,C;
	cin>>A>>B;
	C=A+B;
	int D;
	cin>>D;
	vector<unsigned long int> result;
	vector<unsigned long int>::iterator it;
	while(C!=0)
	{
		result.push_back(C%D);
		C/=D;
	}
	for(it=result.end()-1;it>result.begin();it--)
	{cout<<*it;}
	cout<<result[0];

	system("pause");
	return 0;
}
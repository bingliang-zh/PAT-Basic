#include <iostream>
using namespace std;

int main()
{
	int a,b;
	cin>>a>>b;

	int larger,smaller,value,temp;

	if (a>b)
	{
		larger=a;
		smaller=b;
	}
	else
	{
		larger=b;
		smaller=a;
	}

	value = 1;
	for (temp = 2;temp<=smaller;temp++)
	{
		if(smaller%temp==0&&larger%temp==0)
			value = temp;
	}

	int result;
	result = a*b/value;
	cout<<result;
	return 0;
}
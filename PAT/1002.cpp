#include <iostream>
#include <string>
using namespace std;

int main()
{
	int temp;
	int sum = 0;
	//int num;
	//cin>>num;
	//while (num!=0)
	//{
	//	temp = num%10;
	//	sum += temp;
	//	num = num/10;
	//}

	string input;
	cin>>input;
	string::iterator iter = input.begin();
	for (;iter != input.end();iter++)
	{
		//cout<<*iter;
		sum += (int)*iter-48;
	}
	//cout<<endl;
	//cout<<sum<<endl;

	int n[100];
	int i;
	for (i=0; sum!=0; i++)
	{
		n[i] = sum%10;
		sum = sum/10;
	}
	for (int j = i-1;;j--)
	{
		switch(n[j])
		{
			case 0: {cout<<"ling";break;}
			case 1: {cout<<"yi";break;}
			case 2: {cout<<"er";break;}
			case 3: {cout<<"san";break;}
			case 4: {cout<<"si";break;}
			case 5: {cout<<"wu";break;}
			case 6: {cout<<"liu";break;}
			case 7: {cout<<"qi";break;}
			case 8: {cout<<"ba";break;}
			case 9: {cout<<"jiu";break;}
		}
		if (j==0)
			{break;}
		else cout <<" ";
	}
	system("pause");
	return 0;
}
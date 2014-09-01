#include <iostream>
//#include <fstream>
#include <string>
#include <vector>
using namespace std;

bool check(string str);
bool judge(int a, int b, int c);
int main()
{
	int n;
	cin>>n;
	vector<string> sample;
	vector<string> result;
	for (int i=0;i!=n;i++)
	{
		string temp;
		cin>>temp;
		sample.push_back(temp);
	}
	for (int i=0;i!=n;i++)
	{
		if (check(sample[i])==true)
		//if (rand()%2==0)
			result.push_back("YES");
		else result.push_back("NO");
	}
	for (int i=0;i!=n;i++)
	{
		cout<<result[i]<<endl;
	}

	system("pause");
	return 0;
}

bool check(string str)
{
	int a=0,b=0,c=0;
	string::iterator iter;
	//预处理确定只有PAT三种字母
	for (iter=str.begin();iter!=str.end();iter++)
	{
		//cout<<*iter;
		if (*iter!='P'&&*iter!='A'&&*iter!='T')
			return false;
	}
	//iter=str.begin();
	//if(*iter=='P'&&*(iter+1)=='A'&&*(iter+2)=='T')
	//{return true;}
	//判断数列左边
	for (iter=str.begin();iter!=str.end();iter++)
	{
		if (*iter=='A')
		{a++;/*continue;*/}
		else if (*iter=='T')
		{return false;}
		else//*iter=='P'
			break;
	}
	//*iter=='P';
	if (*(iter+1)!='A')
	{return false;}
	for (iter=iter+1;iter!=str.end();iter++)
	{
		if (*iter=='A')
		{b++;}
		else if(*iter=='P')
		{return false;}
		else
			break;
	}
	//*iter=='T'orPAAAAAAAAA
	//PAAAAAAT类
	if (iter==str.end())
	{
		if (*(iter-1)!='T')
		{return false;}
		if (b>=1&&a==0)
			return true;
		else
			return false;
	}
	else
	{
		for (iter=iter+1;iter!=str.end();iter++)
		{
			if(*iter!='A')
			{return false;}
			c++;
		}
		return (judge(a,b,c));
	}
}

bool judge(int a, int b, int c)
{
	if (b==0)
	{return false;}
	
	if (b==1)
	{
		if (a==c)
			return true;
		else return false;
	}
	else 
	{return (judge(a,b-1,c-a));}
}
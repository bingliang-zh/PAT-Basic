#include<iostream>
#include<string>
using namespace std;
char transchar(char ch);
int main()
{
	string Type,Input;
	cin>>Type>>Input;
	string::iterator it1,it2;
	string BreakKeys;
	for(it1=Type.begin(),it2=Input.begin();it1!=Type.end();)
	{
		if(it2==Input.end())
		{BreakKeys.push_back(*it1);it1++;}
		else if(*it1==*it2)
		{it1++;it2++;}
		else
		{BreakKeys.push_back(*it1);it1++;}
	}
	//cout<<BreakKeys<<endl;
	string Result;
	string::iterator it3;
	for(it3=BreakKeys.begin();it3!=BreakKeys.end();it3++)
	{
		char ch=*it3;
		ch=transchar(ch);
		bool flag=false;
		for(int i=0;i!=Result.size();i++)
		{
			if(ch==Result[i])
			{flag=true;break;}
		}
		if(flag==false)
		{Result.push_back(ch);}
	}
	cout<<Result<<endl;

	system("pause");
	return 0;
}

char transchar(char ch)
{
	if(ch>='a'&&ch<='z')
	{return ch-'a'+'A';}
	else return ch;
}
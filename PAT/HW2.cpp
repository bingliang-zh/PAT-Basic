#include <iostream>
#include <string>
#include <vector>
using namespace std;

class number
{
public:
	bool vip;
	bool live;
	number();
};

int main()
{
	number num[100000];
	int end = 0;
	while(true)
	{
		string str;
		getline(cin, str);
		if (str=="get")//È¡ºÅ
		{
			end++;
			num[end].live=true;
			cout<<end<<endl;
		}
		else if (str=="get vip")//vipÈ¡ºÅ
		{
			end++;
			num[end].live=true;
			num[end].vip=true;
			cout<<"vip "<<end<<endl;
		}
		else if (str=="call")
		{
			if (end==0){cout<<"error"<<endl;}
			int mark1=0;
			int mark2=0;
			for (int i=1;i<=end;i++)//normal
			{
				if (mark1!=0)
				{break;}
				else if(num[i].live==false)
				{continue;}
				else
				{mark1=i;}
			}
			for (int i=1;i<=end;i++)//vip
			{
				if (mark2!=0)
				{break;}
				else if(num[i].vip==false||num[i].live==false)
				{continue;}
				else
				{mark2=i;}
			}
			if (mark2!=0)
			{
				num[mark2].live=false;
				cout<<"vip "<<mark2<<endl;
			}
			else if (mark1!=0)
			{
				num[mark1].live=false;
				cout<<mark1<<endl;
			}
			else
			{cout<<"error"<<endl;}
		}
		else if (str=="count")
		{
			int count=0;
			for (int i=1;i<=end;i++)
			{
				if (num[i].live==true)
				{count++;}
			}
			cout<<count<<endl;
		}
		else if (str=="reset")
		{
			for (int i=1;i<=end;i++)
			{
				num[i].live=false;
				num[i].vip=false;
			}
			end=0;
		}
		else if (str=="quit")
		{break;}
		else if (str.find("delete")==0)
		{
			str.erase(7);
			int temp=str[0];
			if(num[temp].live==true)
			{
				num[temp].live=false;
				if(num[temp].vip==true)
				{cout<<"vip "<<temp<<endl;}
				else
				{cout<<temp<<endl;}
			}
			else
			{cout<<"error"<<endl;}
		}
		else if (str.find("countN")==0)
		{
			str.erase(7);
			int temp=str[0];
			int count=0;
			for (int i=1;i<=temp;i++)
			{
				if (num[i].live==true)
				{count++;}
			}
			cout<<count<<endl;
		}
		else
		{cout<<"error"<<endl;}

	}
	return 0;
}

number::number()
{
	vip = false;
	live = false;
}
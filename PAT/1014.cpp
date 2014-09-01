#include <iostream>
#include <string>

using namespace std;
void Day_Hour(string a,string b);
void Minute(string a,string b);

int main()
{
	string a,b,c,d;
	cin>>a>>b>>c>>d;

	Day_Hour(a,b);
	Minute(c,d);

	system("pause");
	return 0;
}

void Day_Hour(string a,string b)
{
	string::iterator it_a;
	string::iterator it_b;
	for(it_a=a.begin(),it_b=b.begin();;it_a++,it_b++)
	{
		if(*it_a==*it_b&&*it_a>='A'&&*it_a<='G')
		{
			switch(*it_a)
			{
			case 'A':cout<<"MON ";break;
			case 'B':cout<<"TUE ";break;
			case 'C':cout<<"WED ";break;
			case 'D':cout<<"THU ";break;
			case 'E':cout<<"FRI ";break;
			case 'F':cout<<"SAT ";break;
			case 'G':cout<<"SUN ";break;
			}
			break;
		}
	}
	for(it_a++,it_b++;;it_a++,it_b++)
	{
		if(*it_a==*it_b&&(*it_a>='A'&&*it_a<='N'||*it_a>='0'&&*it_a<='9'))
		{
			if(*it_a>='A'&&*it_a<='N')
			{cout<<*it_a-'A'+10<<':';}
			if(*it_a>='0'&&*it_a<='9')
			{cout<<'0'<<*it_a-'0'<<':';}
			break;
		}
	}
}

void Minute(string a,string b)
{
	int i;
	for(i=0;;i++)
	{
		if(a[i]==b[i]&&(a[i]>='A'&&a[i]<='Z'||a[i]>='a'&&a[i]<='z'))
		{break;}
	}
	if(i<10)
	{cout<<'0'<<i;}
	else
	{cout<<i;}

}
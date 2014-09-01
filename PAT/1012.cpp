#include <iostream>
#include <vector>
using namespace std;

void cal_A1(vector<int> A1);
void cal_A2(vector<int> A2);
void cal_A3(vector<int> A3);
void cal_A4(vector<int> A4);
void cal_A5(vector<int> A5);

int main()
{
	vector<int> A1,A2,A3,A4,A5;
	int N;
	cin>>N;
	for(int i=0;i!=N;i++)
	{
		int temp;
		cin>>temp;
		switch (temp%5)
		{
		case 0:A1.push_back(temp);break;
		case 1:A2.push_back(temp);break;
		case 2:A3.push_back(temp);break;
		case 3:A4.push_back(temp);break;
		case 4:A5.push_back(temp);break;
		default:break;
		}
	}
	cal_A1(A1);
	cal_A2(A2);
	cal_A3(A3);
	cal_A4(A4);
	cal_A5(A5);
	//vector<int>::iterator it;
	//for(it=A1.begin();it!=A1.end();it++)
	//{cout<<*it<<' ';}
	//cout<<endl;
	//for(it=A2.begin();it!=A2.end();it++)
	//{cout<<*it<<' ';}
	//cout<<endl;
	//for(it=A3.begin();it!=A3.end();it++)
	//{cout<<*it<<' ';}
	//cout<<endl;
	//for(it=A4.begin();it!=A4.end();it++)
	//{cout<<*it<<' ';}
	//cout<<endl;
	//for(it=A5.begin();it!=A5.end();it++)
	//{cout<<*it<<' ';}
	//cout<<endl;

	system("pause");
	return 0;
}

void cal_A1(vector<int> A1)
{
	vector<int>::iterator it;
	int sum=0;
	for(it=A1.begin();it!=A1.end();it++)
	{
		if((*it)%2==0)
		{sum+=*it;}
	}
	if (sum==0)
	{cout<<"N ";}
	else
	{cout<<sum<<' ';}
}
void cal_A2(vector<int> A2)
{
	vector<int>::iterator it;
	int div_sum=0;
	int i=1;
	for(it=A2.begin();it!=A2.end();it++,i*=-1)
	{
		div_sum+=i*(*it);
	}
	if(A2.size()==0)
	{cout<<"N ";}
	else
	{cout<<div_sum<<' ';}
}
void cal_A3(vector<int> A3)
{
	if(A3.size()==0)
	{cout<<"N ";}
	else
	{cout<<A3.size()<<' ';}
}
void cal_A4(vector<int> A4)
{
	vector<int>::iterator it;
	double sum=0;
	double average;
	for(it=A4.begin();it!=A4.end();it++)
	{sum+=*it;}
	average=sum/A4.size();
	if(sum!=0)
	{
		printf("%.1f",average);
		cout<<' ';
	}
	else
	{cout<<"N ";}
}
void cal_A5(vector<int> A5)
{
	vector<int>::iterator it;
	int bigger=0;
	for(it=A5.begin();it!=A5.end();it++)
	{
		if(*it>bigger)
			bigger=*it;
	}
	if (bigger==0)
	{cout<<'N'<<endl;}
	else
	{cout<<bigger<<endl;}
}
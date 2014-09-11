//3∂Œ¥ÌŒÛ 4‘À––≥¨ ±
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

class record
{
public:
	string name;
	int birthdate;
};

int str_to_int(string Birth_Date);
bool comp(const record A,const record B);
int main()
{
	vector<record> recs;
	int N;
	cin>>N;
	for(int i=0;i!=N;i++)
	{
		record temp;
		cin>>temp.name;
		string temp2;
		cin>>temp2;
		int birthdate=str_to_int(temp2);
		temp.birthdate=birthdate;
		if(birthdate<=20140906&&birthdate>=18140906)
		{recs.push_back(temp);}
	}
	/*for(int i=0;i!=recs.size();i++)
	{cout<<recs[i].name<<endl;}*/

	sort(recs.begin(),recs.end(),comp);
	cout<<recs.size()<<' '<<recs[0].name<<' '<<(recs.end()-1)->name;

	system("pause");
	return 0;
}

int str_to_int(string Birth_Date)
{
	int sum=0;
	sum+=(Birth_Date[0]-'0')*10000000;
	sum+=(Birth_Date[1]-'0')*1000000;
	sum+=(Birth_Date[2]-'0')*100000;
	sum+=(Birth_Date[3]-'0')*10000;
	sum+=(Birth_Date[5]-'0')*1000;
	sum+=(Birth_Date[6]-'0')*100;
	sum+=(Birth_Date[8]-'0')*10;
	sum+=(Birth_Date[9]-'0')*1;
	return sum;
}
bool comp(const record A,const record B)
{
	return(A.birthdate<B.birthdate);
}
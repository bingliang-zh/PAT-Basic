#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
bool Judge_NNNN(string Num);
string transform(string Num);
int main()
{
	string Number;
	cin>>Number;
	if(Judge_NNNN(Number))
	{cout<<Number<<" - "<<Number<<" = 0000"<<endl;return 0;}
	while(Number!="6174")
	{
		Number=transform(Number);
		cout<<Number<<endl;
	}



	system("pause");
	return 0;
}

bool Judge_NNNN(string Num)
{
	if(Num[0]==Num[1]&&Num[1]==Num[2]&&Num[2]==Num[3])
		{return true;}
	else return false;
}

string transform(string N)
{
	sort(N.begin(),N.end());
	for(int i=3;i>=0;i--)
	{cout<<N[i];}
	cout<<" - "<<N<<" = ";
	int temp;
	temp=(N[3]-'0')*1000+(N[2]-'0')*100+(N[1]-'0')*10+(N[0]-'0')
		-(N[0]-'0')*1000-(N[1]-'0')*100-(N[2]-'0')*10-(N[3]-'0');
	string str;
	str.push_back(temp/1000+'0');
	temp=temp%1000;
	str.push_back(temp/100+'0');
	temp=temp%100;
	str.push_back(temp/10+'0');
	temp=temp%10;
	str.push_back(temp+'0');
	return str;
}
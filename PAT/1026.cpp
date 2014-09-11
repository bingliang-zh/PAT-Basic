#include<iostream>
using namespace std;

int main()
{
	int C1,C2;
	cin>>C1>>C2;
	int C3=(C2-C1)/100+((C2-C1)%100>=50);
	//cout<<C3;

	int SS,MM,HH;
	SS=C3%60;
	C3/=60;
	MM=C3%60;
	HH=C3/60;
	if(HH<10)
	{cout<<"0"<<HH<<":";}
	else{cout<<HH<<":";}
	if(MM<10)
	{cout<<"0"<<MM<<":";}
	else{cout<<MM<<":";}
	if(SS<10)
	{cout<<"0"<<SS;}
	else{cout<<SS;}

	system("pause");
	return 0;
}
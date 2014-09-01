#include <iostream>
#include <string>
//#include <algorithm>
using namespace std;

int main()
{
	string Num;
	cin>>Num;
	//sort(Num.begin(),Num.end());
	int M[10]={0};
	string::iterator it;
	for(it=Num.begin();it!=Num.end();it++)
	{
		switch(*it)
		{
		case '0':M[0]++;break;
		case '1':M[1]++;break;
		case '2':M[2]++;break;
		case '3':M[3]++;break;
		case '4':M[4]++;break;
		case '5':M[5]++;break;
		case '6':M[6]++;break;
		case '7':M[7]++;break;
		case '8':M[8]++;break;
		case '9':M[9]++;break;
		default:break;
		}
	}
	if(M[0]!=0){cout<<"0:"<<M[0]<<endl;}
	if(M[1]!=0){cout<<"1:"<<M[1]<<endl;}
	if(M[2]!=0){cout<<"2:"<<M[2]<<endl;}
	if(M[3]!=0){cout<<"3:"<<M[3]<<endl;}
	if(M[4]!=0){cout<<"4:"<<M[4]<<endl;}
	if(M[5]!=0){cout<<"5:"<<M[5]<<endl;}
	if(M[6]!=0){cout<<"6:"<<M[6]<<endl;}
	if(M[7]!=0){cout<<"7:"<<M[7]<<endl;}
	if(M[8]!=0){cout<<"8:"<<M[8]<<endl;}
	if(M[9]!=0){cout<<"9:"<<M[9]<<endl;}
	
	system("pause");
	return 0;
}
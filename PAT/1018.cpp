#include <iostream>
#include <vector>
using namespace std;

class Record
{
public:
	char A;
	char B;

	int winner()
	{
		if(A=='C')
		{
			switch (B)
			{
			case 'C':return 0;break;
			case 'J':return 1;break;
			case 'B':return 2;break;
			}
		}
		else if(A=='J')
		{
			switch (B)
			{
			case 'C':return 2;break;
			case 'J':return 0;break;
			case 'B':return 1;break;
			}
		}
		else if(A=='B')
		{
			switch (B)
			{
			case 'C':return 1;break;
			case 'J':return 2;break;
			case 'B':return 0;break;
			}
		}
	}
};

int main()
{
	vector<Record> records;
	int N;
	cin>>N;
	for(int i=0;i!=N;i++)
	{
		Record temp;
		cin>>temp.A>>temp.B;
		records.push_back(temp);
	}
	//for(int i=0;i!=N;i++)
	//{cout<<records[i].A<<' '<<records[i].B<<endl;}
	int W1=0;
	int W0=0;
	int W2=0;
	int JW[3]={0};
	int YW[3]={0};
	for(int i=0;i!=N;i++)
	{
		if(records[i].winner()==0)//Æ½
		{W0++;}
		if(records[i].winner()==1)//¼×Ê¤
		{
			W1++;
			switch (records[i].A)
			{
			case 'B':JW[0]++;break;
			case 'C':JW[1]++;break;
			case 'J':JW[2]++;break;
			default:
				break;
			}
		}
		if(records[i].winner()==2)//ÒÒÊ¤
		{
			W2++;
			switch (records[i].B)
			{
			case 'B':YW[0]++;break;
			case 'C':YW[1]++;break;
			case 'J':YW[2]++;break;
			default:
				break;
			}
		}
	}
	cout<<W1<<' '<<W0<<' '<<W2<<endl;
	cout<<W2<<' '<<W0<<' '<<W1<<endl;
	//cout<<JW[0]<<JW[1]<<JW[2]<<endl;
	//cout<<YW[0]<<YW[1]<<YW[2]<<endl;
	if(JW[0]>=JW[1]&&JW[0]>=JW[2])
	{cout<<"B ";}
	else if(JW[1]>=JW[2])
	{cout<<"C ";}
	else{cout<<"J ";}

	if(YW[0]>=YW[1]&&YW[0]>=YW[2])
	{cout<<"B";}
	else if(YW[1]>=YW[2])
	{cout<<"C";}
	else{cout<<"J";}
	cout<<endl;
	system("pause");
	return 0;
}
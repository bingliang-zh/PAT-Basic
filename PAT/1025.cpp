#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Node
{
public:
	string Addr;
	int Data;
	string Next;
};

string First_Addr;
int N,K;
void sortlist(vector<Node> &list);
void reverse_list_unit(vector<Node> &list,vector<Node>::iterator a,vector<Node>::iterator b);
int main()
{
	cin>>First_Addr>>N>>K;
	vector<Node> List;
	for(int i=0;i!=N;i++)
	{
		Node temp;
		cin>>temp.Addr>>temp.Data>>temp.Next;
		List.push_back(temp);
	}
	sortlist(List);
	vector<Node>::iterator it=List.begin();
	for(int K2=0;K2+K<=N;K2+=K,it+=K)
	{reverse_list_unit(List,it,it+K);}
	//it=List.begin();
	for(int K2=0;K2+K<N;K2+=K)
	{List[K2+K-1].Next=List[K2+K].Addr;}

	for(int i=0;i!=N;i++)
	{cout<<List[i].Addr<<' '<<List[i].Data<<' '<<List[i].Next<<endl;}

	system("pause");
	return 0;
}
void sortlist(vector<Node> &list)
{
	vector<Node> temp;
	vector<Node>::iterator it;
	for(it=list.begin();it!=list.end();it++)
	{if(it->Addr==First_Addr){temp.push_back(*it);break;}}
	while((temp.end()-1)->Next!="-1")
	{
		for(it=list.begin();it!=list.end();it++)
		{if(it->Addr==(temp.end()-1)->Next){temp.push_back(*it);break;}}
	}
	list=temp;
}

void reverse_list_unit(vector<Node> &list,vector<Node>::iterator a,vector<Node>::iterator b)
{
	vector<Node> temp;
	vector<Node>::iterator it,it2;
	for(it=b;it!=a;it--)
	{temp.push_back(*(it-1));}
	for(it=temp.begin(),it2=a;it!=temp.end()-1;it++,it2++)
	{it2->Addr=it->Addr;it2->Data=it->Data;it2->Next=(it+1)->Addr;}
	it2->Addr=it->Addr;it2->Data=it->Data;
}
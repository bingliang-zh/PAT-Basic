#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int L;//录取最低分
int H;//优先录取线

class stu
{
public:
	int ID;
	int moral;
	int ability;
	int sum;
	bool admit;
	int type;
	stu();
	stu(int _ID, int _moral, int _ability);
};

bool cmp(stu a , stu b)
{
if(a.sum!=b.sum) return a.sum>b.sum;
else if(a.moral!=b.moral) return a.moral>b.moral;
else return a.ID<b.ID;
}

void print(stu s)  
{  
/*  cout<<s.ID<<" "<<s.De<<" "<<s.Cai<<endl;*/  
	printf("%d %d %d\n",s.ID,s.moral,s.ability);  
}  

int main()
{
	int N;//总人数
	scanf("%d %d %d",&N,&L,&H); 
	//cin>>N>>L>>H;
	vector<stu> type_0;
	vector<stu> type_1;
	vector<stu> type_2;
	vector<stu> type_3;
	//vector<stu> output;
	
	//输入
	for (int i=0;i!=N;i++)
	{
		int ID,moral,ability;
		cin>>ID>>moral>>ability;
		stu temp(ID,moral,ability);
		if (temp.type==-1)
		{continue;}
		else if (temp.type==0)
		{type_0.push_back(temp);}
		else if (temp.type==1)
		{type_1.push_back(temp);}
		else if (temp.type==2)
		{type_2.push_back(temp);}
		else if (temp.type==3)
		{type_3.push_back(temp);}
	}

	if (type_0.size()!=0)
	{sort(type_0.begin(),type_0.end(),cmp);}
	if (type_1.size()!=0)
	{sort(type_1.begin(),type_1.end(),cmp);}
	if (type_2.size()!=0)
	{sort(type_2.begin(),type_2.end(),cmp);}
	if (type_3.size()!=0)
	{sort(type_3.begin(),type_3.end(),cmp);}

	printf("%d\n",type_0.size()+type_1.size()+type_2.size()+type_3.size());
	//cout<<type_0.size()+type_1.size()+type_2.size()+type_3.size()<<endl;
	
	for_each(type_0.begin(),type_0.end(),print);  
	for_each(type_1.begin(),type_1.end(),print);  
	for_each(type_2.begin(),type_2.end(),print);  
	for_each(type_3.begin(),type_3.end(),print);  
	//for (int i=0;i!=type_0.size();i++)
	//{cout<<type_0[i].ID<<" "<<type_0[i].moral<<" "<<type_0[i].ability<<endl;}
	//for (int i=0;i!=type_1.size();i++)
	//{cout<<type_1[i].ID<<" "<<type_1[i].moral<<" "<<type_1[i].ability<<endl;}
	//for (int i=0;i!=type_2.size();i++)
	//{cout<<type_2[i].ID<<" "<<type_2[i].moral<<" "<<type_2[i].ability<<endl;}	
	//for (int i=0;i!=type_3.size();i++)
	//{cout<<type_3[i].ID<<" "<<type_3[i].moral<<" "<<type_3[i].ability<<endl;}

	//system("pause");
	return 0;
}

stu::stu(int _ID, int _moral, int _ability)
{
	ID = _ID;
	moral = _moral;
	ability = _ability;
	sum = _moral+_ability;
	if (moral<L||ability<L)
	{type = -1;admit = false;}//不被录取
	else if (moral>=H&&ability>=H)
	{type = 0;admit = true;}//才德全尽,按总分从高到低排序
	else if (moral>=H&&ability<H)
	{type = 1;admit = true;}//德胜才，总分排序
	else if (moral<H&&ability<=moral)
	{type = 2;admit = true;}//才德兼亡但德胜才，总分排序
	else
	{type = 3;admit = true;}//剩余考生
}


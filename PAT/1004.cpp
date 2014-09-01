#include <iostream>
#include <string>

using namespace std;

class student
{
public:
	string name;
	string number;
	int grade;
};

int main()
{
	int N;
	cin>>N;
	student higher;
	student lower;
	student temp;
	cin>>temp.name>>temp.number>>temp.grade;
	higher=temp;
	lower=temp;
	//cout<<higher.name<<lower.name<<endl;
	for (int i=1;i!=N;i++)
	{
		cin>>temp.name>>temp.number>>temp.grade;
		if (temp.grade>higher.grade)
		{higher=temp;}
		if (temp.grade<lower.grade)
		{lower=temp;}
		//cout<<higher.name<<lower.name<<endl;
	}
	cout<<higher.name<<" "<<higher.number<<endl;
	cout<<lower.name<<" "<<lower.number<<endl;
	system("pause");
	return 0;
}
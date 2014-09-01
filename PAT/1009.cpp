#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<string> list;
	string str;
	getline(cin,str);
	string::iterator strit;
	string temp;
	for(strit=str.begin();strit!=str.end();strit++)
	{
		if(strit+1==str.end())
		{temp.push_back(*strit);list.push_back(temp);}
		else if(*strit==' ')
		{list.push_back(temp);temp.clear();}
		else
		{temp.push_back(*strit);}
	}

	vector<string>::iterator it;
	cout<<*(list.end()-1);
	for(it=list.end()-1;it!=list.begin();it--)
	{
		cout<<' '<<*(it-1);
	}
	cout<<endl;
	system("pause");
	return 0;
}
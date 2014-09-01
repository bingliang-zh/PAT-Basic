#include<iostream>
#include<string>
using namespace std;
int stringtoint(string str);
int main()
{
	string KXBDS;
	cin>>KXBDS;
	string::iterator it;
	bool a;
	char b;
	string c;
	bool d;
	string E;
	int e;
	
	if(KXBDS[0]=='+'){a=true;}
	else{a=false;}

	b=KXBDS[1];

	for(it=KXBDS.begin()+3;*it!='E';it++)
	{c.push_back(*it);}

	it++;
	if(*it=='+'){d=true;}
	else{d=false;}

	for(it++;it!=KXBDS.end();it++)
	{E.push_back(*it);}
	e=stringtoint(E);
	//cout<<a<<'\n'<<b<<'\n'<<c<<'\n'<<d<<'\n'<<e;
	//cout<<e;

	if(d)//指数为正
	{
		if(e==c.size())
		{
			c.insert(c.begin(),b);
			if(a){cout<<c<<endl;}
			else{c.insert(c.begin(),'-');cout<<c<<endl;}
		}
		else if(e>c.size())
		{
			while(e>c.size())
			{c.insert(c.end(),'0');}
			c.insert(c.begin(),b);
			if(a){cout<<c<<endl;}
			else{c.insert(c.begin(),'-');cout<<c<<endl;}
		}
		else if(e<c.size())
		{
			c.insert(c.begin()+e,'.');
			c.insert(c.begin(),b);
			if(a){cout<<c<<endl;}
			else{c.insert(c.begin(),'-');cout<<c<<endl;}
		}
	}
	else//指数为负
	{
		if(e==0)
		{
			c.insert(c.begin(),'.');
			c.insert(c.begin(),b);
			if(a){cout<<c<<endl;}
			else{c.insert(c.begin(),'-');cout<<c<<endl;}
		}
		else if(e==1)
		{
			c.insert(c.begin(),b);
			c.insert(c.begin(),'.');
			c.insert(c.begin(),'0');
			if(a){cout<<c<<endl;}
			else{c.insert(c.begin(),'-');cout<<c<<endl;}
		}
		else//e>1
		{
			c.insert(c.begin(),b);
			while(e>1)
			{c.insert(c.begin(),'0');e--;}
			c.insert(c.begin(),'.');
			c.insert(c.begin(),'0');
			if(a){cout<<c<<endl;}
			else{c.insert(c.begin(),'-');cout<<c<<endl;}
		}




	}





	system("pause");
	return 0;
}

int stringtoint(string str)
{
	int sum=0;
	string::iterator it;
	int ten=1;
	for(it=str.end();it!=str.begin();it--,ten*=10)
	{
		sum+=(*(it-1)-'0')*ten;
	}
	return sum;
}
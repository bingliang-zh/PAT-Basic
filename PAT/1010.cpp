#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> input;//输入
	vector<int> output;//输出
	int temp;
	char next_char;
	//输入，遇回车符结束输入
	while (true)
	{
		next_char = cin.peek();
		if (next_char=='\n')
		break;
		cin>>temp;
		input.push_back(temp);
	}
	//判断输入格式【个数必须为偶数个】
	if (input.size()%2!=0)
	{return -1;}
	//如果输入常数就返回0 0
	if (input.size()==2&&input[1]==0)
	{
		cout<<"0 0";
	}
	else{
	//系数和指数的运算
	for (int i = 0;i!=input.size()/2;i++)
	{
		//判断指数是否为零，不为零则将结果放入output中，为零则忽略
		if (input[2*i+1]!=0)
		{
			temp = input[2*i]*input[2*i+1];
			output.push_back(temp);
			temp = input[2*i+1]-1;
			output.push_back(temp);
		}
	}
	//按照格式输出
	int i;
	for (i = 0;i!=output.size()-1;i++)
	{
		cout<<output[i]<<" ";
	}
	cout<<output[i];
	}
	system("pause");
	return 0;
}

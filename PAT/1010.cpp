#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> input;//����
	vector<int> output;//���
	int temp;
	char next_char;
	//���룬���س�����������
	while (true)
	{
		next_char = cin.peek();
		if (next_char=='\n')
		break;
		cin>>temp;
		input.push_back(temp);
	}
	//�ж������ʽ����������Ϊż������
	if (input.size()%2!=0)
	{return -1;}
	//������볣���ͷ���0 0
	if (input.size()==2&&input[1]==0)
	{
		cout<<"0 0";
	}
	else{
	//ϵ����ָ��������
	for (int i = 0;i!=input.size()/2;i++)
	{
		//�ж�ָ���Ƿ�Ϊ�㣬��Ϊ���򽫽������output�У�Ϊ�������
		if (input[2*i+1]!=0)
		{
			temp = input[2*i]*input[2*i+1];
			output.push_back(temp);
			temp = input[2*i+1]-1;
			output.push_back(temp);
		}
	}
	//���ո�ʽ���
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

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool COVERED[100] = { false };
vector<int>NUM;

int Callatz(int n)
{
	if (n == 1)return 0;
	else if (n % 2 == 0){
		n /= 2;
		if(n<=100)COVERED[n] = true;
		return Callatz(n);
	}
	else{
		n = (3 * n + 1) / 2;
		if (n <= 100)COVERED[n] = true;
		return Callatz(n);
	}
}

int main()
{
	int N;
	cin >> N;
	for (int i = 0; i != N; i++)
	{
		int K;
		cin >> K;
		NUM.push_back(K);
		if (K<=100&&COVERED[K] == true){
			continue;
		}
		else Callatz(K);
	}
	sort(NUM.begin(), NUM.end());
	bool find_the_lagest = false;
	for (int i = N - 1; i >= 0; i--)
	{
		if (find_the_lagest == false)
		{
			if (COVERED[NUM[i]] == false)
			{
				cout << NUM[i]; find_the_lagest = true;
			}
		}
		else
		{
			if (COVERED[NUM[i]] == false)
				cout << " " << NUM[i];
		}
	}
	system("pause");
	return 0;
}
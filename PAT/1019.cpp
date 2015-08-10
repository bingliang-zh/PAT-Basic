#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int sortNum(int num);
void int2str(int num);

int main() {
	int num;
	cin >> num;
	do {
		num = sortNum(num);
	} while (num != 6174 && num != 0000);//必须要执行一步，比如6174或者0000
	system("pause");
	return 0;
}

int sortNum(int num) {
	vector<int>numbers;
	for (int i = 0; i != 4; i++) {
		numbers.push_back(num % 10);
		num /= 10;
	}
	sort(numbers.begin(), numbers.end());
	int smallNum = 1000 * numbers[0] + 100 * numbers[1] + 10 * numbers[2] + numbers[3];
	int bigNum = 1000 * numbers[3] + 100 * numbers[2] + 10 * numbers[1] + numbers[0];
	int diff = bigNum - smallNum;
	for (int i = 0; i < 4; i++) {
		cout << numbers[3 - i];
	}
	cout << " - ";
	for (int i = 0; i < 4; i++) {
		cout << numbers[i];
	}
	cout << " = ";
	int2str(bigNum - smallNum);
	return bigNum - smallNum;
}

void int2str(int num) {
	if (num < 10) { cout << "000" << num << endl; }
	else if (num < 100) { cout << "00" << num << endl; }
	else if (num < 1000) { cout << "0" << num << endl; }
	else { cout << num << endl; }
}
#include <iostream>
using namespace std;

bool isPrime(int number);

int main() {
	int M, N;

	cin >> M >> N;

	int count = 0;
	int row = 0;
	int number = 2;
	while (count<N) {
		if (isPrime(number)) {
			count++;
			if (count >= M) {
				row++;
				if (count == N) {
					cout << number;
				}
				else {
					if (row % 10 != 0) {
						cout << number << ' ';
					}
					else {
						cout << number << endl;
					}
				}
			}
		}
		number++;
		
	}
	system("pause");
	return 0;
}

bool isPrime(int number) {
	for (int i = 2; i*i <= number; i++) {
		if (number%i == 0) {
			return false;
		}
	}
	return true;
}
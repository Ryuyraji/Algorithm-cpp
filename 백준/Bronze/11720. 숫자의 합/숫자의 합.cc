
#include<iostream>
#include<string>
using namespace std;

int main() {
	int N;
	cin >> N;
	int sum = 0;
	string num;
	cin >> num;

	for (int i = 0; i < N; i++) {
		sum+=(num[i] - '0');
	}
	cout << sum;
}
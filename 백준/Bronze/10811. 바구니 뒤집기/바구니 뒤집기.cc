#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int N,M;
	cin >> N >> M;
	vector<int>array(N);
	int a, b;
	for (int i = 0; i < N; i++) {
		array[i] = i + 1;
	}
	for (int i = 0; i < M; i++) {
		cin >> a >> b;
		reverse(array.begin() + (a - 1), array.begin() + b);

	}
	
	for (int i = 0; i < N; i++) {
		cout << array[i]<<' ';
	}
}
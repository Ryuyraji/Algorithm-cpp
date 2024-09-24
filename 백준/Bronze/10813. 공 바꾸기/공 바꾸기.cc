#include<iostream>
#include<vector>
using namespace std;
int main() {

	int N, M;
	int a, b;
	cin >> N >> M;
	vector<int>basket(N);

	for (int i = 0; i < N; i++) {
		basket[i] = i + 1;
	}// 바구니 초기화하기,각 바구니에 해당 번호 공 넣기

	for (int i = 0; i < M; i++) {
		cin >> a >> b;
			int temp = basket[a-1];
			basket[a-1] = basket[b-1];
			basket[b-1] = temp;
	}
	for (int i = 0; i < N; i++) {
		cout << basket[i]<<" ";
	}
}
#include<iostream>
#include<vector>
using namespace std;

int main() {
	vector<vector<int>> array; // 2차원 배열 초기화
	int x, y;

	// 입력 받기
	while (true) {
		cin >> x >> y;
		if (x == 0 && y == 0) break; // 0 0 입력 시 종료
		array.push_back({ x, y }); // 입력된 값을 배열에 추가
	}

	// 합 출력하기
	for (int i = 0; i < array.size(); i++) {
		int sum = array[i][0] + array[i][1];
		cout << sum << '\n';
	}
}
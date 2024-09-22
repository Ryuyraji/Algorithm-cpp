#include<iostream>
#include<vector>
using namespace std;

int main() {
	vector<vector<int>>array;
	int x, y;
	while (cin >> x >> y) {
		array.push_back({ x,y });
	}
	for (int i = 0; i < array.size(); i++) {
		int sum = array[i][0] + array[i][1];
		cout << sum << '\n';
	}
}

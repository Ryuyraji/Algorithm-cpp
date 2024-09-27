#include<iostream>
#include<vector>
using namespace std;
int main() {
	int N;
	float sum = 0;
	float avg;
	cin >> N;
	vector<int>score(N);
	for (int i = 0; i < N; i++) {
		cin >> score[i];
	}
	int max = score[0];
	for (int i = 0; i < N; i++) {
		if (max <= score[i]) {
			max = score[i];
		}
	}
	for (int i = 0; i < N; i++) {
		 sum+= (float)score[i] / max * 100;
	}
	avg = sum / N;
	cout <<avg;
}
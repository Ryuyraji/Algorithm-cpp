#include<iostream>
using namespace std;

int main() {
	int array[10];
	int cnt = 0;
	int A[10];
	for (int i = 0; i < 10; i++) {
		cin >> array[i];
		A[i] = array[i] % 42;
	}
	for (int i = 0; i < 10; i++) {
		bool different  = true;
		for (int j = 0; j < i; j++) {
			if (A[i] == A[j]) {
				different = false;
				break;
			}
		}
		if(different)cnt++;
		
	}
	cout << cnt;
	
}
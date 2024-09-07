#include<iostream>
#include<vector>
using namespace std;
int main() {
    int arr[9];
    int cnt = 1;
    for (int i = 0; i < 9; i++) {
        cin >> arr[i];
    }
    int max = arr[0];
    for (int i = 1; i < 9; i++) {
        if (arr[i] > max) {
            max = arr[i];
            cnt = i+1;
        }
        }
    cout << max << '\n' << cnt;
    }

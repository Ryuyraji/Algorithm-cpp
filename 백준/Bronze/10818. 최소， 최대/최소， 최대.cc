#include<iostream>
#include<vector>
using namespace std;

int main() {
    int N, V;
    cin >> N;
    vector<int>arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    int max = arr[0];
    int min = arr[0];

    for (int i = 0; i < N; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        else if (arr[i] < min) {
            min = arr[i];
        }
    }
    cout << min << ' ' << max;


}
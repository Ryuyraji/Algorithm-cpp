#include<iostream>
#include<vector>
using namespace std;

int main() {
    int N,V;
    int cnt=0;
    cin >> N;
    vector<int>arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    cin >> V;
    for (int i = 0; i < N; i++) {
        if (arr[i] == V) {
            cnt++;
        }
    }
    cout << cnt;

}
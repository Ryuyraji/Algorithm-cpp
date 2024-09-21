#include<iostream>
#include<vector>
using namespace std;

int main() {
    int X;
    int N;
    int sum = 0;
    cin >> X >> N;
    vector<vector<int>>array(N, vector<int>(N * 2));;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> array[i][j];
        }
    }
    for (int i = 0; i < N; i++) {
        
        sum += array[i][0] * array[i][1];
    }
    if (sum == X)cout << "Yes";
    else {
        cout << "No";
    }
}
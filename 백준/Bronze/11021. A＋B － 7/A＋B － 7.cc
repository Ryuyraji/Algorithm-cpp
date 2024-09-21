#include<iostream>
#include<vector>
using namespace std;

int main() {
    int i, j;
    int N;
    int plus;
    cin >> N;
    vector<vector<int>>array(N, vector<int>(2));
    for (i = 0; i < N; i++) {
        for (j = 0; j < 2; j++) {
            cin >> array[i][j];
        }
    }
    for (i = 0; i < N; i++) {
        plus = array[i][0] + array[i][1];
        cout <<"Case #"<<i + 1<<':'<< ' '<<plus << '\n';
    }
    
}
#include <iostream>
#include<vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<int>> array(N, vector<int>(M));
    vector<vector<int>> input(N, vector<int>(M));
    vector<vector<int>> output(N, vector<int>(M));
   
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> array[i][j];
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> input[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            output[i][j] = array[i][j] + input[i][j];
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << output[i][j]<<" ";
        }
        cout << "\n";
    }
}
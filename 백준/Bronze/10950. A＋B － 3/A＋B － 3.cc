#include<iostream>
#include<vector>

using namespace std;
int main() {
    int T;
    cin >> T;
    vector<int> results;  // A + B 결과를 저장할 벡터

    for (int i = 0; i < T; i++) {
        int A, B;
        cin >> A >> B;
        results.push_back(A + B);  // A + B를 벡터에 저장
    }

    for (int i = 0; i < T; i++) {
        cout << results[i] << '\n';  // 벡터에서 결과를 출력
    }
}

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

// 비교 함수
bool compare(const string& a, const string& b) {
    if (a.length() == b.length()) {  // 길이가 같으면
        return a < b;  // 사전순으로 정렬
    }
    return a.length() < b.length();  // 길이가 다르면 길이순으로 정렬
}

int main() {
    int n;
    cin >> n;

    vector<string> str(n);

    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }
    
    // 정렬
    sort(str.begin(), str.end(), compare);

    // 중복된 단어 제거 및 출력
    cout << str[0] << "\n";  // 첫 번째 단어는 무조건 출력
    for (int i = 1; i < n; i++) {
        if (str[i] != str[i - 1]) {  // 이전 단어와 다르면 출력
            cout << str[i] << "\n";
        }
    }

    return 0;
}

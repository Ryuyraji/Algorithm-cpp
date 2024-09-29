#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cin >> input;

    // *각 알파벳의 위치를 초기화 (-1로)
    int alphabet[26];
    for (int i = 0; i < 26; i++) {
        alphabet[i] = -1;
    }

    // 문자열의 각 문자를 순회하며 해당 알파벳의 처음 등장 위치 기록
    for (int i = 0; i < input.length(); i++) {
        int index = input[i] - 'a'; 
        if (alphabet[index] == -1) {// 처음에 -1로 초기화 했기 때문에 사용 
            alphabet[index] = i;
        }
    }

    // 결과 출력
    for (int i = 0; i < 26; i++) {
        cout << alphabet[i] << ' ';
    }

    return 0;
}
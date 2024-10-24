#include <iostream>
#include <string>
using namespace std;

int main() {
    string croatia[] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
    string input;
    cin >> input;

    int count = 0;  // 크로아티아 알파벳의 개수를 셀 변수
    for (int i = 0; i < input.length();) {
        bool found = false;
        // 크로아티아 알파벳 배열을 순회하며, 해당하는 크로아티아 알파벳이 있는지 확인
        for (int j = 0; j < 8; j++) {
            // 현재 위치에서 크로아티아 알파벳이 있는지 확인
            if (input.substr(i, croatia[j].length()) == croatia[j]) {
                i += croatia[j].length();  // 크로아티아 알파벳 길이만큼 인덱스 이동
                count++;  // 알파벳 개수 카운트 증가
                found = true;
                break;  // 찾았으므로 더 이상 다른 알파벳을 체크하지 않음
            }
        }
        if (!found) {  // 크로아티아 알파벳이 아니라면 한 글자로 처리
            i++;
            count++;
        }
    }

    cout << count;
}

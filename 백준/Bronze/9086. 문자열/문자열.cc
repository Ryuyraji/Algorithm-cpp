#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
    int num;
    cin >> num;
    vector<string> array;

    // 버퍼에 남아있는 '\n' 제거
    cin.ignore();//getline을 쓰기위해 필요하다

    // 문자열 입력 받기
    for (int i = 0; i < num; i++) {
        string input;
        getline(cin, input);           // 줄 단위로 문자열 입력받기
        array.push_back(input);
    }

    // 문자열 처리
    for (int i = 0; i < num; i++) {
        cout << array[i][0];  // 첫 번째 문자 출력

        // 마지막 문자가 있는 경우 출력
        if (!array[i].empty()) {
            cout << array[i].back() << endl;  // 마지막 문자 출력
        }
    }

    return 0;
}


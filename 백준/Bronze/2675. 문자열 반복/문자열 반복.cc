#include <iostream>
#include <string>

using namespace std;

int main() {

    int num;
    cin >> num;// 테스트 케이스 입력 횟수
    int R;
    string S;
   
    for (int i = 0; i < num; i++) {
        cin >> R >> S; 
        string P = ""; // 각 테스트 케이스마다 새로운 결과 문자열 초기화 안하면 겹쳐나옴!
        for (char c : S) {
            for (int j = 0; j < R; j++) {
                P += c;
            }
        }
        cout << P<<"\n";
    }
}
    
#include<iostream>
#include<vector>
using namespace std;

int main() {
    int num;
    vector<int> line(31, 0);  

    
    for (int i = 0; i < 28; i++) {
        cin >> num;
        line[num] = 1;  // *제출한 학생 번호를 1로 표시
    }

   
    for (int i = 1; i <= 30; i++) {  
        if (line[i] != 1) {
            cout << i << "\n";  // *출석번호를 출력
        }
    }

    
}
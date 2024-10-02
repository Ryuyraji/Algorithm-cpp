#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cin >> word;

    int total_time = 0;

    // 각 알파벳에 해당하는 숫자별 걸리는 시간을 계산
    for (char c : word) {
        if (c >= 'A' && c <= 'C') {
            total_time += 3; 
        }
        else if (c >= 'D' && c <= 'F') {
            total_time += 4;  
        }
        else if (c >= 'G' && c <= 'I') {
            total_time += 5;  
        }
        else if (c >= 'J' && c <= 'L') {
            total_time += 6; 
        }
        else if (c >= 'M' && c <= 'O') {
            total_time += 7;  
        }
        else if (c >= 'P' && c <= 'S') {
            total_time += 8; 
        }
        else if (c >= 'T' && c <= 'V') {
            total_time += 9;  
        }
        else if (c >= 'W' && c <= 'Z') {
            total_time += 10; 
        }
    }

    cout << total_time;

  
}
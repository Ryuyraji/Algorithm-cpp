#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main() {
    string input;
    int cnt = 0;
    while (true) {
        getline(cin, input);
        if (cin.eof()) break;
        stringstream ss(input);
        string word;
        while (ss >> word) {  // stringstream에서 단어를 하나씩 추출
            cnt++;
        }
    }
  
    
    cout << cnt;
     
}
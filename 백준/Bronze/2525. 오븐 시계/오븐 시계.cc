#include<iostream>
using namespace std;

int main() {
    int A, B, C;
    int H, M;
    cin >> A >> B >> C;

   
    B = B + C;

    
    if (B >= 60) {
        H = B / 60;   
        A = A + H;    
        M = B % 60;   
    }
    else {
        M = B;  
    }

    // *시간이 24시를 넘어가면 0으로 돌아가게 처리
    if (A >= 24) {
        A = A % 24;
    }

    cout << A << ' ' << M;
    return 0;
}
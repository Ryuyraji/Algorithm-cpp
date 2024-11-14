#include <iostream>
using namespace std;

// 최대공약수 함수
int yak(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

// 최소공배수 함수
int Bae(int a, int b) {
    return a * (b / yak(a, b));  // (a * b) 대신 a * (b / gcd(a, b))로 처리해 오버플로 방지
}

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int A, B;
        cin >> A >> B;
        cout << Bae(A, B) << "\n";
    }

    return 0;
}
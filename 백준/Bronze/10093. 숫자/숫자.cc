#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    // A가 B보다 크면 두 값을 교환
    if (A > B) {
        int temp = A;
        A = B;
        B = temp;
    }

    // 두 수 사이에 있는 정수의 개수 출력
    if (A == B) {
        cout << 0 << "\n";
    } else {
        cout << B - A - 1 << "\n";
    }

    // 두 수 사이의 정수 출력 (A + 1부터 B - 1까지)
    for (int i = A + 1; i < B; i++) {
        cout << i << " ";
    }

    return 0;
}

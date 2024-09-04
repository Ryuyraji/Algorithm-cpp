#include<iostream>
using namespace std;

// 팩토리얼을 계산하는 재귀 함수
long long int Factorial(int N) {
    if (N <= 1)
        return 1; // 기저 조건: 0!과 1!은 1
    else
        return N * Factorial(N - 1); // 재귀적으로 팩토리얼 계산
}

int main() {
    int N;
    cin >> N; 
    if (N <= 20 && N >= 0) {
        cout << Factorial(N) << endl; // 팩토리얼 결과 출력
    }
   
    return 0;
}

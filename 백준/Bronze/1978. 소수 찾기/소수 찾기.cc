/*
#include <iostream>

using namespace std;

int main() {

    int test;
    cin >> test;
    int cnt1 = 0;

    for (int i = 0; i < test; i++) {
        int n;
        cin >> n;

        int cnt = 0;

        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                cnt++;
            }
        }
        if (cnt == 2) {
            cnt1++;
        }
    }
    cout << cnt1;
    return 0;
}*/

#include <iostream>
#include <vector>
#include <cmath> // sqrt 함수를 사용하기 위해 필요
using namespace std;

int main() {
    int num;
    cin >> num;

    vector<int> input(num); // 크기가 num인 벡터를 선언하여 입력을 저장
    int primeCount = 0;//소수의 개수를 세기 위해 선언

    for (int i = 0; i < num; i++) {
        cin >> input[i];//입력된 숫자를 벡터 input에 저장 
    }

    for (int i = 0; i < num; i++) {
        bool isPrime = true;//각 숫자가 소수인지 아닌지 나타내는 변수선언
        if (input[i] < 2) {
            isPrime = false; // 2보다 작은 숫자는 소수가 아님
        }
        else {
            int sqrtValue = sqrt(input[i]);
            for (int j = 2; j <= sqrtValue; j++) {
                if (input[i] % j == 0) {
                    isPrime = false; // 나누어 떨어지면 소수가 아님
                    break;
                }
            }
        }

        if (isPrime) {
            primeCount++; // 소수일 때 카운트 증가
        }
    }

    cout << primeCount << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int A, B;
    int num;
    int num2;
    cin >> A>>B;
    num = (A % 10)*100;
    num += (A / 10) % 10 * 10;
    num+=(A / 10) / 10;
    num2 = (B % 10) * 100;
    num2 += (B / 10) % 10 * 10;
    num2 += (B / 10) / 10;
    if (num > num2)cout << num;
    else { cout << num2; }

}
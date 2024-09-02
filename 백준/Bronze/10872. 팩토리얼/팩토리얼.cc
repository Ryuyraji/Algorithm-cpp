#include <iostream>
using namespace std;
int Factorial(int num) {
    if (num == 1||num == 0) {
        return  1;
    }
    return num * Factorial(num - 1);

}
int main() {
    int N;
        cin >> N;
        cout<< Factorial(N) << endl;
        return 0;

}
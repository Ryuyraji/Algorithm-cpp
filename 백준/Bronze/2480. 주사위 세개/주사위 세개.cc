#include<iostream>
using namespace std;

int main() {
    int A, B, C;
    int result;
    cin >> A >> B >> C;
    if (A == B && B == C) {
        result = 10000 + A * 1000;
    }
    else if (A == B || B == C || A == C) {
        if (A == B) {
            result = 1000 + A * 100;
        }
        else if (B == C) {
            result = 1000 + B * 100;
        }
        else if (A == C) {
            result = 1000 + A * 100;
        }
    }
    else if (A != B && B != C && A != C) {
        int max = 0;
        max = ((A > B) && (A > C)) ? A : ((B > A) && (B > C)) ? B : C;
        result = max * 100;
    }
    cout << result;
}

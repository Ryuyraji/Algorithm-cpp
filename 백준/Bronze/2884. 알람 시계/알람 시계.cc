#include<iostream>
using namespace std;

int main() {
    int H, M;
    cin >> H >> M;
    if (M < 45) {
        M = 60 + (M - 45);
        if (H == 0) {
            H = 23;
        }
        else { H = H - 1; }
      
    }
    else if (M >= 45) {
        M = M - 45;
    }
    cout << H << ' ' << M;
}
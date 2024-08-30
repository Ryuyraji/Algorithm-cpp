#include<iostream>
using namespace std;
int main() {
    int A, B, V;
    int x, y;
    int day = 0;
    cin >> A >> B >> V;
    //(A - B)* (day - 1) + A <= V >= (A - B) * (day - 1) + 1;
    if ((V - A) % (A - B) == 0) {
        day = (V - A) / (A - B) + 1;
    }
    else {
        day = (V - A) / (A - B) + 1+1;
    }
    cout << day;
}

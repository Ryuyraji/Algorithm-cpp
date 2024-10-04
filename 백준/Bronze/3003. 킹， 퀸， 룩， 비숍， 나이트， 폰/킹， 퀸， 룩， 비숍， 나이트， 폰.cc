#include <iostream>
using namespace std;

int main() {
    //총 16,킹:1개,퀸:1개,룩:2개,비숍:2,나이트:2,폰:8
    int correct[6] = { 1,1,2,2,2,8 };
    int array[6];
    for (int i = 0; i < 6; i++) {
        cin >> array[i];
    }
    for (int i = 0; i < 6; i++) {
        if (array[i] == correct[i])cout << "0" << " ";
        else {
            cout << correct[i] - array[i] << " ";
        }
    }

}
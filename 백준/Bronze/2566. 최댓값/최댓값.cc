#include <iostream>
using namespace std;

int main() {
    int array[9][9];
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> array[i][j];
        }
    }
    int max = array[0][0];
    int maxi=1;
    int maxj=1;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (array[i][j] > max) {
                max = array[i][j];
                maxi = i+1;
                maxj = j+1;
           }
        }
    }
    cout << max<<"\n" << maxi << ' ' << maxj;
    
}
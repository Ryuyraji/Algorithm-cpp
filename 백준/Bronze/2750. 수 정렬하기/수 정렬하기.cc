#include <iostream>
#include<vector>
using namespace std;

void Sort(vector <int>& arr) {
    int temp;
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr.size()-i- 1; j++) {
            if (arr[j] > arr[j+1]) {
                 temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int N;
    cin >> N;
    vector<int>arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    Sort(arr);
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
}
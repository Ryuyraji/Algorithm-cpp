#include<iostream>
#include<vector>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> A(N); 
    int X;
    std::cin >> X;

    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }
    for (int i = 0; i < N; i++) {
        if (A[i] < X) {
            std::cout << A[i] << " ";
        }
    }

    return 0;
}

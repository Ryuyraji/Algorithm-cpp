#include<iostream>

int main() {

    int A, B;
    std::cin >> A;
    std::cin >> B;
    std::cout << A * (B%10) << '\n';
    std::cout << A * (B%100/10) << '\n';
    std::cout << A * (B/100)<< '\n';
    std::cout << A * B << std::endl;
}
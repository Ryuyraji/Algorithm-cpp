#include<iostream>
#include<cmath>
#include<string>
using namespace std;

void hanoi(int n, int from, int temp, int to) {
    if (n == 1) {
        cout << from << " " << to << '\n';
        return;
    }
        hanoi(n - 1, from, to, temp);
        cout << from << " " << to << '\n';
        hanoi(n - 1, temp, from, to);
}
//하노이 탑의 총 이동 횟수 (2^n - 1)을 계산하는 함수
string hanoicount(int n) {

    string hanoi;// 이동 횟수를 문자열로 저장할 변수
    hanoi = to_string(pow(2, n));// 2의 n승을 계산하여 문자열로 변환, 소수점까지 포함
    hanoi = hanoi.substr(0, hanoi.find('.'));// 소수점을 찾아서 그 앞부분(정수 부분)만 남김
    hanoi[hanoi.size() - 1] -= 1;// 계산된 숫자에서 1을 빼서 (2^n - 1)로 만듦

        return hanoi;
}
int main() {
    int N;
    cin >> N;
    
    cout << hanoicount(N) << '\n';
    if(N<=20)
    hanoi(N,1,2,3);
    
}
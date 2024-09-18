#include<iostream>
#include<iomanip>  // setprecision을 사용하기 위해 필요

using namespace std;
int main() {
   double A, B;
   cin >> A >> B;
   cout << fixed << setprecision(9) << A / B;  // 소수점 이하 9자리까지 출력
}

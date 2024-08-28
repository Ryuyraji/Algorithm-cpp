#include<iostream>

int main() {
    int num;
    std::cin >> num;
    char array[80] = { 0, };
    int* sum2 = new int[num];
    for (int i = 0; i < num; i++) {
  
        std::cin >> array;
        int cnt = 0;
        int sum = 0;
        for (int j = 0; array[j]!='\0'; j++) {

            if (array[j] == 'O') {
                ++cnt;
                sum += cnt;
            }
            else if (array[j] == 'X') {
                cnt = 0;
            }
            
        }
        sum2[i] = sum;
        
    }
    for (int i = 0; i < num; i++) {
        std::cout << sum2[i] << '\n';
    }
    delete[] sum2;  
    return 0;

}
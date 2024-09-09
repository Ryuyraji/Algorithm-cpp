#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int arr[9]; 
    int sum = 0; 
    for (int i = 0; i < 9; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    sort(arr, arr + 9); 

    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            if (sum - arr[i] - arr[j] == 100)
            {
                for (int k = 0; k < 9; k++)
                {
                    if (k == i || k == j) // 이 경우는 제외되어야 함. (일곱난쟁이가 아님)
                    {
                        continue;
                    }
                    cout << arr[k] << '\n'; // 일곱난쟁이의 경우 출력 (이미 오름차순이 되어있으므로 고려 x)
                }
                return 0; // 출력 되었다면 return 0;
            }
        }
    }

    return 0;
}
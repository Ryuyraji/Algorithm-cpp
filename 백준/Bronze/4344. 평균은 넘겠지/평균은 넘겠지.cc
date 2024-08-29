#include<iostream>
using namespace std;
int main() {
    int C;//테스트 케이스의 수
    cin >> C;

    int **arr=new int*[C];
    int N;
    int i,j;
    int sum;
    float* final = new float[C];
    float* avg = new float[C];

    
    for (i = 0; i < C ; i++) {
       
        cin >> N;
        arr[i] = new int[N];
        int sum = 0;
        int cnt = 0;
   
        for (j = 0; j < N; j++) {

            cin >> arr[i][j];
            sum += arr[i][j];

        }
            avg[i] = (float)sum / (float)N;

        for (j = 0; j < N; j++) {

            if (arr[i][j] > avg[i]) {
                    ++cnt;
               
            }
        }
        final[i] = (float)cnt / (float)N * 100;// 평균을 넘는 학생들의 비율 계산
    }
    
    
    for (i = 0; i < C ; i++) {
        cout << fixed;
        cout.precision(3);
        cout<< final[i] << "%" <<'\n';
    }

    for (i = 0; i < C; i++) {
        delete[] arr[i];//각 행의 데이터를 가리키는 포인터(각 행의 데이터 저장 해제)
    }
    delete[] arr;//포인터 배열(즉,포인터를 저장하는 배열) 각 포인터는 각각의 행을 가르킴.
    delete[] avg;
    delete[] final;
    return 0;

} 
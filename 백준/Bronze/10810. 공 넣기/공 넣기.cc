#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;  // N: 바구니의 갯수, M: 공을 넣는 횟수
    cin >> N >> M;
    
    vector<int> result(N, 0);  // 바구니에 들어있는 공의 번호를 저장하는 벡터, 처음엔 모두 0
    vector<vector<int>> array(M, vector<int>(3));  // 공을 넣는 방법을 저장하는 2차원 벡터
    
    for (int i = 0; i < M; i++) {
        cin >> array[i][0] >> array[i][1] >> array[i][2];  // i, j, k 입력받기
    }
    
    // 공을 넣는 과정
    for (int i = 0; i < M; i++) {
        int start = array[i][0] - 1;  // 1-based 인덱스를 0-based로 변환
        int end = array[i][1] - 1;
        int ball = array[i][2];  // 넣을 공의 번호
        
        for (int j = start; j <= end; j++) {
            result[j] = ball;  // 해당 범위에 공을 넣음
        }
    }
    
    // 결과 출력
    for (int i = 0; i < N; i++) {
        cout << result[i] << " ";  // 결과를 공백으로 구분하여 출력
    }
    cout << endl;
    
    return 0;
}

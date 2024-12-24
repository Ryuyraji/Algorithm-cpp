#include <stdio.h>

int main() {
    char array[7]; // 16진수 수를 저장할 배열 (최대 길이 6글자 + null 문자)
    int a;

    // 16진수 입력 받기
    scanf("%s", array);

    // 16진수를 10진수로 변환
    sscanf(array, "%x", &a);

    // 변환된 10진수 출력
    printf("%d\n", a);

    return 0;
}
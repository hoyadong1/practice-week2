#include <stdio.h>

int main() {
    // 두 개의 변수 선언
    int num1, num2, result;

    // 사용자로부터 두 개의 숫자 입력 받기
    printf("첫 번째 숫자를 입력하세요: ");
    scanf("%d", &num1);
    printf("두 번째 숫자를 입력하세요: ");
    scanf("%d", &num2);

    // 뺄셈 연산
    result = num1 - num2;

    // 결과 출력
    printf("결과: %d\n", result);

    return 0;
}

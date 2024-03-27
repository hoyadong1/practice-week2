#include <stdio.h>

int main() {
    int num1, num2, result;
    char operation; // 연산 종류를 저장할 변수

    // 사용자로부터 두 개의 숫자 입력 받기
    printf("첫 번째 숫자를 입력하세요: ");
    scanf("%d", &num1);
    printf("두 번째 숫자를 입력하세요: ");
    scanf("%d", &num2);

    // 더하기 또는 빼기 연산 선택
    printf("더하기는 +, 빼기는 -를 입력하세요: ");
    scanf(" %c", &operation); // char 입력 전에 공백을 넣어 입력 버퍼를 정리합니다.

    // 선택된 연산 수행
    if(operation == '+') {
        result = num1 + num2;
        printf("결과: %d + %d = %d\n", num1, num2, result);
    } else if(operation == '-') {
        result = num1 - num2;
        printf("결과: %d - %d = %d\n", num1, num2, result);
    } else {
        printf("잘못된 연산자입니다.\n");
    }

    return 0;
}


/*
  파일이름: 익명 프로필 만들기
  작 성 자: 60251629 강영현
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
   
    system("chcp 65001");

    char initial;
    float height;
    float weight;
    char gender;
    int a, b;
    int result;

    printf(" 익명 프로필을 만들어드립니다.\n");
    printf(" ===================================\n");

    printf(" 당신의 영문 이니셜 한글자를 입력하세요: ");
    scanf(" %c", &initial);

    printf(" 당신의 키를 입력하세요: ");
    scanf("%f", &height);

    printf(" 당신의 몸무게를 입력하세요: ");
    scanf("%f", &weight);

    // 나이를 입력할 때 두 숫자를 띄어쓰기로 구분해서 입력해야 합니다 (예: 10 15)
    printf(" 당신의 나이를 두 숫자의 합으로 입력하세요 (예: 10 15): ");
    scanf("%d %d", &a, &b);
    result = a + b;

    printf(" 당신의 성별(X,Y)을 입력하세요: ");
    scanf(" %c", &gender);

    printf("\n 프로필\n");
    printf("=======================\n");
    printf("당신의 이니셜: %c\n", initial);
    printf("당신의 성별: %c\n", gender);
    printf("당신의 나이: %d세\n", result);
    printf("당신의 키: %.1fcm\n", height);
    printf("당신의 몸무게: %.2fkg\n", weight);

    return 0;
}

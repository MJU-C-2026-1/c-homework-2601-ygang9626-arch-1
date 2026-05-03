
/*
  파일이름: 본인 티어 측정하기
  작 성 자: 60251629 강영현
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
   
    system("chcp 65001");

    char initial;
    float height;
    int money;
    char gender;
    int study;
    int a, b;
    int result;

    printf(" 스펙 측정해드립니다.\n");
    printf(" ===================================\n");

    printf(" 당신의 영문 이니셜 한글자를 입력하세요: ");
    scanf(" %c", &initial);

    printf(" 당신의 성별(X,Y)을 입력하세요: ");
    scanf(" %c", &gender);
  
    printf(" 당신의 키를 입력하세요: ");
    scanf("%f", &height);
    

    if (height <= 160) {
        printf("E\n");
    } 
    else if (height <= 165) {
        printf("D\n");
    } 
    else if (height <= 170) {
        printf("C\n");
    } 
    else if (height <= 175) {
        printf("B\n");
    } 
    else if (height <= 181) {
        printf("A\n");
    } 
    else if (height <= 184) {
        printf("S\n");
    } 
    else if (height <= 187) {
        printf("SS\n");
    } 
    else {
        printf("측정 불가.\n");
    }
    
  
    printf(" 재산을 입력하세요(1000만원 단위): ");
    scanf("%d", &money);
    if (money <= 1000) {
        printf("E\n");
    } 
    else if (money <= 2000) {
        printf("D\n");
    } 
    else if (money <= 3000) {
        printf("C\n");
    } 
    else if (money <= 5000) {
        printf("B\n");
    } 
    else if (money <= 7000) {
        printf("A\n");
    } 
    else if (money <= 10000) {
        printf("S\n");
    } 
    else if (money >= 20000) {
        printf("SS\n");
    } 
    else {
        printf("측정 불가.\n");
    }
    // 나이를 입력할 때 두 숫자를 띄어쓰기로 구분해서 입력해야 합니다 (예: 10 15)
    printf(" 당신의 나이를 두 숫자의 합으로 입력하세요 (예: 10 15): ");
    scanf("%d %d", &a, &b);
    result = a + b;
    if (result >= 21 && result <= 24) {
        printf("SS\n");
    } 
    else if (result <= 26 ) {
        printf("S\n");
    } 
    else if (result <= 28) {
        printf("A\n");
    } 
    else if (result <= 31) {
        printf("B\n");
    } 
    else if (result <= 33) {
        printf("C\n");
    } 
    else if (result <= 35) {
        printf("D\n");
    } 
    else if (result <= 40 ) {
        printf("E\n");
    } 
    else {
        printf("측정 불가.\n");
    }
    
  
    printf(" 최종학력을 입력하세요( 중졸(1), 고졸(2), 전문대졸(3), 지방4년제졸(4), 인서울4년제졸(5), 중경외시이상 명문대졸(6), sky카포졸업(7): ");
    scanf(" %d", &study);
    if (study = 1) {
        printf("E\n");
    } 
    if (study = 2) {
        printf("D\n");
    } 
    if (study = 3) {
        printf("C\n");
    } 
    if (study = 4) {
        printf("B\n");
    } 
    if (study = 5) {
        printf("A\n");
    } 
    if (study = 6) {
        printf("S\n");
    } 
    if (study = 7) {
        printf("SS\n");
    } 
    else {
        printf("측정 불가.\n");
    
      
      printf("\n 스펙 측정\n");
    printf("=======================\n");
    printf("당신의 키 등급: %c\n", height);
    printf("당신의 재산 등급: %c\n", money);
    printf("당신의 학력 등급: %c\n", study);
    printf("당신의 나이 등급: %c\n", result);
    ;

    return 0;
}

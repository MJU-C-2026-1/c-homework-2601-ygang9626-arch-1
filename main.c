
/*
  파일이름: 본인 티어 측정하기
  작 성 자: 60251629 강영현
*/
#include <stdio.h>
#include <stdlib.h>


#define MAX 100

// 함수 선언
void inputAndAnalyze(char* p_initial, float* p_height, int* p_money, int* p_study, 
                     char* p_h_grade, char* p_m_grade, char* p_a_grade, char* p_s_grade, int count);
void printSystemSummary(char* p_initial, char* p_h_grade, char* p_m_grade, char* p_s_grade, char* p_a_grade, int count);
char getGrade(float value, int type);

int main() {
    system("chcp 65001");

    // 데이터 저장을 위한 배열 선언
    char initial[MAX];
    float height[MAX];
    int money[MAX];
    int study[MAX];
    char h_grade[MAX], m_grade[MAX], a_grade[MAX], s_grade[MAX];
    
    int count = 0; // 현재 입력된 인원 수
    int menu;

    while (1) {
        printf("\n======= 스펙 분석 시스템 =======\n");
        printf("1. 스펙 입력 및 분석\n");
        printf("2. 시스템 전체 현황 조회\n");
        printf("3. 프로그램 종료\n");
        printf("==============================\n");
        printf("메뉴를 선택하세요: ");
        scanf("%d", &menu);

        if (menu == 1) {
            inputAndAnalyze(initial, height, money, study, h_grade, m_grade, a_grade, s_grade, count);
            count++;
        } else if (menu == 2) {
            printSystemSummary(initial, h_grade, m_grade, s_grade, a_grade, count);
        } else if (menu == 3) {
            printf("프로그램을 종료합니다.\n");
            break;
        } else {
            printf("잘못된 선택입니다. 다시 선택해주세요.\n");
        }
    }
    return 0;
}

// 데이터 입력 및 분석 (포인터 연산 사용)
void inputAndAnalyze(char* p_initial, float* p_height, int* p_money, int* p_study, 
                     char* p_h_grade, char* p_m_grade, char* p_a_grade, char* p_s_grade, int count) {
    int a, b;
    
    printf("\n영문 이니셜을 입력하세요: ");
    scanf(" %c", (p_initial + count)); // 포인터 연산 사용

    printf("성별(X, Y)을 입력하세요: ");
    char gender;
    scanf(" %c", &gender);

    printf("키를 입력하세요: ");
    scanf("%f", (p_height + count));

    printf("재산을 입력하세요(1000만원 단위): ");
    scanf("%d", (p_money + count));

    printf("최종학력을 입력하세요(중졸1, 고졸2, 전문대졸3, 대졸4): ");
    scanf("%d", (p_study + count));

    printf("나이를 두 숫자의 합으로 입력하세요 (예: 10 15): ");
    scanf("%d %d", &a, &b);

    // 등급 산정 후 배열에 저장
    *(p_h_grade + count) = getGrade(*(p_height + count), 1);
    *(p_m_grade + count) = getGrade((float)*(p_money + count), 2);
    *(p_a_grade + count) = getGrade((float)(a + b), 3);
    *(p_s_grade + count) = getGrade((float)*(p_study + count), 4);

    printf("\n[안내] 성공적으로 분석되었습니다.\n");
}

// 시스템 현황 조회 (포인터 연산 사용)
void printSystemSummary(char* p_initial, char* p_h_grade, char* p_m_grade, char* p_s_grade, char* p_a_grade, int count) {
    printf("\n======= 시스템 현황 조회 =======\n");
    printf("현재까지 서비스 이용자 수: %d명\n", count);
    for (int i = 0; i < count; i++) {
        printf("%d번 회원(%c): 키:%c, 재산:%c, 학력:%c, 나이:%c\n", 
               i+1, *(p_initial + i), *(p_h_grade + i), *(p_m_grade + i), *(p_s_grade + i), *(p_a_grade + i));
    }
    printf("==============================\n");
}

// 등급 판정 로직
char getGrade(float value, int type) {
    // 1. 키 등급
    if (type == 1) {
        if (value <= 160) return 'E';
        else if (value <= 165) return 'D';
        else if (value <= 170) return 'C';
        else if (value <= 175) return 'B';
        else if (value <= 181) return 'A';
        else if (value <= 184) return 'S';
        else if (value <= 187) return 'U';
        else return 'F';
    } 
    // 2. 재산 등급
    else if (type == 2) {
        if (value <= 1000) return 'E';
        else if (value <= 2000) return 'D';
        else if (value <= 3000) return 'C';
        else if (value <= 5000) return 'B';
        else if (value <= 7000) return 'A';
        else if (value <= 10000) return 'S';
        else if (value >= 20000) return 'U';
        else return 'F';
    } 
    // 3. 나이 등급
    else if (type == 3) {
        if (value >= 21 && value <= 24) return 'U';
        else if (value <= 26) return 'S';
        else if (value <= 28) return 'A';
        else if (value <= 31) return 'B';
        else if (value <= 33) return 'C';
        else if (value <= 35) return 'D';
        else if (value <= 40) return 'E';
        else return 'F';
    } 
    // 4. 학력 등급
    else if (type == 4) {
        if (value == 1) return 'E';
        else if (value == 2) return 'D';
        else if (value == 3) return 'C';
        else if (value == 4) return 'B';
        else if (value == 5) return 'A';
        else if (value == 6) return 'S';
        else if (value == 7) return 'U';
        else return 'F';
    }
    return 'F';
}


    }
}



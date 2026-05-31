
/*
  파일이름: 본인 티어 측정하기
  작 성 자: 60251629 강영현
*/
#include <stdio.h>
#include <stdlib.h>


void inputAndAnalyze();                              
void printSystemSummary();                           
char getGrade(float value, int type);                

int main()
{
    system("chcp 65001"); 
    int menu;

   
    while (1) {
        printf("\n======= 스펙 분석 시스템 =======\n");
        printf("1. 스펙 입력 및 분석\n");
        printf("2. 시스템 전체 현황 조회\n");
        printf("3. 프로그램 종료\n");
        printf("=======================================\n");
        printf("메뉴를 선택하세요: ");
        scanf("%d", &menu);


        if (menu == 1) {
            inputAndAnalyze(); 
        }
        else if (menu == 2) {
            printSystemSummary(); 
        }
        else if (menu == 3) {
            printf("프로그램을 종료합니다.\n");
            break; 
        }
        else {
            printf("잘못된 선택입니다. 다시 선택해주세요.\n");
        }
    }

    return 0;
}


void inputAndAnalyze() {

    char initial;
    char gender;
    float height;
    int money;
    int a, b, result;
    int study;

    char h_grade, m_grade, a_grade, s_grade; 

    printf("\n스펙 측정해드립니다.\n");
    printf("=====================================\n");

    printf("당신의 영문 이니셜 한글자를 입력하세요: ");
    scanf(" %c", &initial); 

    printf("당신의 성별(X,Y)을 입력하세요: ");
    scanf(" %c", &gender);

    printf("당신의 키를 입력하세요: ");
    scanf("%f", &height);
    h_grade = getGrade(height, 1);

    printf("재산을 입력하세요(1000만원 단위): ");
    scanf("%d", &money);
    m_grade = getGrade((float)money, 2);

    printf("당신의 나이를 두 숫자의 합으로 입력하세요 (예: 10 15): ");
    scanf("%d %d", &a, &b);
    result = a + b;
    a_grade = getGrade((float)result, 3);

    printf("최종학력을 입력하세요( 중졸(1), 고졸(2), 전문대졸(3), 지방4년제졸(4), 인서울4년제졸(5), 중경외시이상 명문대졸(6), sky카포졸(7) ): ");
    scanf("%d", &study);
    s_grade = getGrade((float)study, 4);

  
    printf("\n 스펙 측정 결과\n");
    printf("=====================================\n");
    printf("당신의 키 등급: %c급\n", h_grade);
    printf("당신의 재산 등급: %c급\n", m_grade);
    printf("당신의 학력 등급: %c급\n", s_grade);
    printf("당신의 나이 등급: %c급\n", a_grade);

   
    totalUsers++; 
    printf("\n[안내] 성공적으로 분석되었습니다. (현재까지 분석된 누적 회원수: %d명)\n", totalUsers);
}


void printSystemSummary() {
    printf("\n======= 시스템 현황 조회 =======\n");
    printf("현재까지 서비스를 이용한 총 회원 수: %d명\n", totalUsers);
    printf("=================================\n");
}


char getGrade(float value, int type) {
    // 키 등급 판정
    if (type == 1) {
        if (value <= 160) return 'E';
        else if (value <= 165) return 'D';
        else if (value <= 170) return 'C';
        else if (value <= 175) return 'B';
        else if (value <= 181) return 'A';
        else if (value <= 184) return 'S';
        else if (value <= 187) return 'U'; // 기존 SS 구간 -> 'U' 등급으로 변경!
        else return 'F'; 
    }
    // 재산 등급 판정
    else if (type == 2) {
        if (value <= 1000) return 'E';
        else if (value <= 2000) return 'D';
        else if (value <= 3000) return 'C';
        else if (value <= 5000) return 'B';
        else if (value <= 7000) return 'A';
        else if (value <= 10000) return 'S';
        else if (value >= 20000) return 'U'; // 기존 SS 구간 -> 'U' 등급으로 변경!
        else return 'F';
    }
    // 나이 등급 판정
    else if (type == 3) {
        if (value >= 21 && value <= 24) return 'U'; // 기존 SS 구간 -> 'U' 등급으로 변경!
        else if (value <= 26) return 'S';
        else if (value <= 28) return 'A';
        else if (value <= 31) return 'B';
        else if (value <= 33) return 'C';
        else if (value <= 35) return 'D';
        else if (value <= 40) return 'E';
        else return 'F';
    }
    // 학력 등급 판정
    else if (type == 4) {
        if (value == 1) return 'E';
        else if (value == 2) return 'D';
        else if (value == 3) return 'C';
        else if (value == 4) return 'B';
        else if (value == 5) return 'A';
        else if (value == 6) return 'S';
        else if (value == 7) return 'U'; // 기존 SS 구간 -> 'U' 등급으로 변경!
        else return 'F';
    }
    return 'F';
}

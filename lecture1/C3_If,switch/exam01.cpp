// 조건문 : if문과 switch문으로 제시한 조건(condition)에 따라서 명령을 다르게 수행하기 위한 문장이다.
// if문 종류 : 단순IF, IF~ELSE, IF~else if...(else), 중첩IF
// 반드시 숙지

#include <iostream>

using namespace std;

int main(void) {
    // 정수 입력 받아 양수인지 확인하는 프로그램 (0은 양수에 포함 안되는 것)
    int input_num = 0;

    cout << "하나의 정수를 입력하세요 : ";
    cin >> input_num;

    // code block({})은 if문 영역 표식으로, 실행 명령어 1개일 시 생략 가능.
    // 하지만 웬만하면 {}을 해주는 습관을 들이자. 
    // 원라인코드도 있긴 함. 
    if (input_num > 0) {
        cout << "입력한 정수는 " << input_num <<"은(는) 양의 정수입니다." << endl;
        cout << "조건식은 참입니다" << endl;
    }
        
    return 0;
}
// switch문의 실습 
// 조건문에는 if문과 switch 구문이 존재한다.
// switch 구문은 if 구문들보다 가독성이 좋다는 점 외 장점은 없다.
// switch(조건)-case 상수 - break(switch블럭 탈출용) -default(else 구문과 유사,옵션)
// switch문 용도 : 한정된 값, 정형화 값 ex)동서남북,1~12월, 학점, 요일 등
// 딱 정해진 값 분기 시, 가독성 좋아 사용 가능. 
// 현업에서 거의 안씀(99%가 IF문임). 
// 모든 switch 문은 if문 변경이 가능하지만, 모든 if문은 switch 문으로 변경 불가
// switch 조건은 문자형 상수나 정수형 상수 사용 가능하여, if문에 비해 적다. 
// break문 없을 시, 하위 명령문 전부 실행함. break문 지정은 필수.

//계절 선택 프로그램

#include <iostream>
#include <string>

using namespace std;

int main(void) {

    char season = ' ';
    string str = "";
    cout << "봄 : A 또는 a를 누르세요." << endl;
    cout << "여름 : B 또는 b를 누르세요." << endl;
    cout << "가을 : C 또는 c를 누르세요." << endl;
    cout << "겨울 : D 또는 d를 누르세요." << endl;
    cout << "-------------------------" << endl;

    cout << "좋아하는 계절을 입력해주세요 : ";
    cin >> season;

    // 입력 받은 값으로 분기
    // 문자열을 조건값으로 사용 불가(자바는 가능)
    switch (season){
        case 'A':
        case 'a':
            cout << "선택한 계절은 봄입니다." <<endl;
            cout << "메시지 : 만물이 소생하는 계절" << endl;
            break;
        case 'B':
        case 'b':
            cout << "선택한 계절은 여름입니다." <<endl;
            cout << "메시지 : 바캉스를 떠나는 계절" << endl;
            break;
        case 'C':
        case 'c':
            cout << "선택한 계절은 가을입니다." <<endl;
            cout << "메시지 : 곡식과 과일이 풍성한 계절" << endl;
            break;
        case 'D':
        case 'd':
            cout << "선택한 계절은 겨울입니다." <<endl;
            cout << "메시지 : 새하얀 눈이 덮인 스키의 계절" << endl;
            break;
        default:
            cout << "선택한 계절이 없습니다." << endl;
            cout << "알파벳은 대소문자 구별없이 A,B,C,D만 허용합니다. "<<endl;
            break;
    }
    

    return 0;
}
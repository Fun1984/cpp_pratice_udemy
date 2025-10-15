//if~else if .. else 문의 실습과 한계점

#include <iostream>

using namespace std;

int main(void) {
    //성적 처리 프로그램
    int score = 0;
    char grade = ' ';

    cout << "점수를 입력하세요 : ";
    cin >> score;

    //한계점 해결
/*     if (score < 0 || score > 100) {
        cout << "입력하신 값은 0~100 사이의 값이 아닙니다." <<endl;
        cout << "프로그램을 종료합니다" << endl;
        return 0;
    }else {
        if(score >= 90) {
            grade = 'A';
        }
        else if(score >= 80) {
            grade = 'B';
        }
        else if(score >= 70) {
            grade = 'C';
        }
        else if (score >= 60) {
            grade = 'D';
        }
        else {
            grade = 'F';
        }
    }
 */

if (cin.fail()) { // fail()은 cin 객체의 메소드로, 선언한 타입이 미일치 시, true를 리턴한다.
    cout << "입력한 값 0~100 사이 값이 아닙니다." << endl;
    cout << "프로그램을 종료합니다." << endl;
    return 0;
}
if(score >= 90 && score <= 100) {
    grade = 'A';
}
else if(score >= 80&& score < 90) {
    grade = 'B';
}
else if(score >= 70&& score < 80) {
    grade = 'C';
}
else if (score >= 60&& score < 70) {
    grade = 'D';
}
else if (score < 60 && score >= 0) {
    grade = 'F';
}


    cout << "입력한 점수 : " << score << endl;
    cout << "점수 등급 : " << grade << endl;

    return 0;
}

//디버깅 : 에러를 잡아나가는 통상 과정. 
// 프로그램 흐름을 확인할 때도 사용함. 
// 디버깅 바업ㅂ : 먼저 어디서부터 시작할 지 브레이크포인트(중단점, 토글 포인트)를 설정한다. F5를 눌러서 디버그 모드로 프로그램 실행
// F11번으로 한 단계식 확인한다.
// 메모리 주소, CPU관여도 등을 확인
// Ctrl + F5를 이용하면, 브레이크 포인트는 무시된다.(중요)
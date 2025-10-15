// 종합 실습 예제 -1
// 다음 내용에 맞는 프로그램을 작성하시오. 
// char 형 변수 1개 선언 및 초기화
// 키보드로 부터 문자(알파벳 대소문자, 숫자) 입력 받는다.
// 예외처리 필수

// if ~ else if ~ else 구문 사용 : 대문자, 소문자, 숫자인지 판별

// 실행결과 


#include <iostream>

using namespace std;

int main(void) {

    char S = ' ';
    
    cout << "문자를 입력하시오 : ";
    cin >> S; 
    
    if (cin.fail()) {
        cout << "입력한 값은 맞지 않습니다." << endl;
        cout << "프로그램을 종료합니다." << endl;
        return 0;
    }

    if (S >= 'A' && S <='Z') {
        cout << "입력한 " << S << "는(은) \"알파벳 대문자\"입니다." << endl;
    }
    else if (S >='a' && S <='z') {
        cout << "입력한 " << S << "는(은) \"알파벳 소문자\"입니다." << endl;

    }
    else if (S >='0' && S <='9') {
        cout << "입력한 " << S << "는(은) \"숫자\"입니다." << endl;
    }
    else {
        cout << "입력한 " << S << "는(은) \"기타 문자\"입니다." << endl;
    }


    return 0;
}
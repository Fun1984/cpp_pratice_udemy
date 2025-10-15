// string클래스에 실습 - 1
// string클래스는 문자열을 나타내기 위하여, 작성된 클래스
// 문자열 저장 및 처리에 필요한 변수들과 함수들로 구성됨.
// string 클래스가 문자열 자세 세부사항을 모두 담당함. 
// 개발자는 멤버들의 용도를 잘 알고, 사용만 하면 된다. (외부 구현 몰라도 사용가능)

// 클래스 : 형틀, 붕어빵틀, 설계도 등
// 객체 : 부산물

#include <iostream>


using namespace std;

int main(void) {
    // 아래와 같이 선언 시, 스택 할당 되는 것 기억하자.
    // string str = NULL;
    string str1 = "안녕";
    string str2 = "반가워";
    string result = str1 + str2;

    int a = 10;
    int b = 20;
    int c = a + b;

    // 아래와 같이 &연산자를 이용해 주소 출력 가능함. 
    cout << &str1 << endl;
    cout << &str2 << endl;
    cout << &result << endl;
    cout << result <<endl;

    // 문자열 비교
    // string 클래스에는 ==, <, > 를 이용하여 비교 해보자. (연산자가 오버로딩 되어있음)
    if (str1 == str2) {
        cout << "동일한 문자열입니다. " << endl;
    }
    else {
        cout << "동일한 문자열이 아닙니다." << endl;
    }

    // > : 사전순으로 계산
    str1 = "aa";
    str2 = "bbb";
    if (str1 < str2) {
        cout << "str1이 앞에 있습니다." << endl;
    }
    else {
        cout << "str2가 앞에 있습니다." << endl;
    }

    return 0;
}
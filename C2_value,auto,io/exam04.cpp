//수식과 연산자

#include <iostream>
using namespace std;

int main(void) {

    int x = 5;
    int y = 3;
    // 강제 캐스팅-int값을 float형태로 x를 변경
    // 실수/정수는 실수가 된다.
    float result = x/y;
    cout << result << endl;
    
    result = (float)x/y;
    // 정수/정수는 정수이다.
    cout << result << endl;

    // % : 나머지를 구하는 연산자
    // 홀수, 짝수, 배수 구할 시 자주 사용
    x = 12;
    y = 3;
    
    cout << x%y << endl;

    if (x%y == 0) {
        cout << "짝수입니다. " << endl;
    }
    else {
        cout << "홀수입니다. " << endl;
    }

    if (x%y == 0) {
        cout << "x는 3의 배수입니다. " << endl << endl;
    }
    else {
        cout << "x는 3의 배수가 아닙니다." << endl << endl;
    }

    //증감 연산자( ++ : 증가 연산자, -- : 감소 연산자)
    int i = 10;
    // 후위 증가 연산자
    cout << i++ << endl;
    cout << i << endl;
    // 후위 감소 연산자
    i = 10;
    cout << i-- << endl;
    cout << i << endl;
    // 전위 증가 연산자
    i = 10;
    cout << ++i << endl;
    cout << i << endl;
    // 전위 감소 연산자
    i = 10;
    cout << --i << endl;
    cout << i << endl;

}
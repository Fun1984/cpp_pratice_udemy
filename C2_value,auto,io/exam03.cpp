#include <iostream>
// Ctrl + Space : 인텔리전스 기능 or 자동완성기능
using namespace std;

int main(void) {
    int i = 100;
    float f = 100.117f;
    string str = "";
    // cout : 출력 시 사용 객체
    cout << i << endl;
    cout << f << endl;

    // cin : 입력 시 사용 객체
    cout << "정수 하나를 입력해주세요. : ";
    cin >> i;
    // 입력받은 값을 출력
    cout << "입력받은 정수값 : " << i << endl;

    cout << "실수 하나를 입력해주세요. : ";
    cin >> f;
    // 입력받은 값을 출력
    cout << "입력받은 실수값 : " << f << endl;

    cout << "문자열을 입력해주세요. : ";
    cin >> str;
    // 입력받은 값을 출력
    cout << "입력받은 문자열 : " << str << endl;

    return 0;
}
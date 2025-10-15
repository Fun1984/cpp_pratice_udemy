//조건문 실습 - if else 문의 한계점

#include <iostream>

using namespace std;
int main(void) {
    char ch = ' ';

    cout << "알파벳을 하나 입력해주세요 : ";
    cin >> ch;

    // 한계점 해결법 : 입력값이 문자나 소문자가 아닐 시, 
    // 사용자 실수 입력 방지 코드(예외 처리)
    // 아래의 조건 : 알파벳이 아니라면
    if (!(ch >= 'A' && ch <= 'Z') && !(ch >= 'a' && ch <= 'z')) {
        cout << "입력값 " <<ch << "는(은) 알파벳이 아닙니다.";
        cout<< "프로그램을 종료합니다." << endl;
        return 0; //함수는 return 문을 만나면 자동종료가 이루어진다.
    }

    // 알파벳이 대문자인 판별하는 조건
    if (ch >= 'A' && ch <= 'Z') {
        cout << "입력한 알파벳 " << ch << "는(은) \'대문자\' 입니다" <<endl;
        printf("%d\n", ch); //c++은 c언어를 흡수하고 있다. 
        cout << "입력한 알파벳 " << int(ch) << "는(은) 아스키 코드값으로 " << int(ch) << "입니다." << endl;
    }
    else {
        cout << "입력한 알파벳 " << ch << "는(은) \'소문자\' 입니다." <<endl;
        cout << "입력한 알파벳 " << int(ch) << "는(은) 아스키 코드값으로 " << int(ch) << "입니다." << endl;
    }
    //if else 구문이 혹여 실수로 알파벳이 아닌 것이 입력될 시, 무조건 else로 넘어감. 

    return 0;
}
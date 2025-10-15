//문제 3
// 사용자로부터 암호 입력 받을 시, 사용자 입력 암호가 안전한 지 검사하는 프로그램을 만들어보자.
// 사용자 입력 암호 안에 대문자, 소문자, 숫자가 모두 들어있다면, 안전한 암호로 간주한다. 
// 3개 중 하나라도 누락 시, 보안 메세지를 띄운다. 

// 실행결과
// 암호를 입력하세요 : avc312
// 안전하지 않습니다.
// 암호를 입력하세요 : Abc23
// 안전합니다. 


#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str = "";

    while (true) {
        
        cout << "암호를 입력하세요 : ";
        getline(cin, str);
    
        bool is_lower = false;
        bool is_upper = false;
        bool is_numeric = false;
    
        for (int i=0; i < str.size(); i++) {
            if(str[i] >= 'a' && str[i] <= 'z') {
                is_lower = true;
            } else if (str[i] >= 'A' && str[i] <= 'Z') {
                is_upper = true;
            } else if (str[i] >= '0' && str[i] <= '9') {
                is_numeric = true;
            }
        }
        if (is_lower && is_upper && is_numeric) {
            cout << "안전합니다." << endl;
            break;
        } else {
            cout << "안전하지 않습니다." << endl;
        }
    }

    return 0;
}
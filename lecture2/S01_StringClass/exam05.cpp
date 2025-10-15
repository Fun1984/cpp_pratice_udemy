//string 객체에서 문자 추출하기

#include <iostream>
#include <string>

using namespace std;

int main(void) {

    string str = "hello";
    cout << str.substr(1, 1) << endl;
    cout << "주민등록 번호 입력 : ";
    cin >> str;
    
    cout <<"-가 제거된 주민등록 번호 : ";
    for (auto& c : str) {
        if (c == '-') {
            continue;
        }
        cout << c;
    }
    cout << endl;
    return 0;
}
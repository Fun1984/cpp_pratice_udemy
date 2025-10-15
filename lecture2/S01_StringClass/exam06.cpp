//string 배열
//string 기본형 타입처럼 얼마든 배열 생성 가능
// 2차원 배열과 같은 원리

#include <iostream>
#include <string>

using namespace std;

int main(void) {

    //문자열 배열
    string list[] = {"철수", "영희", "길동"};
    cout << list << endl;
    cout << list[0] << endl;
    cout << list[1] << endl;
    cout << list[2] << endl;
    cout << &list[0] << endl;
    cout << &list[1] << endl;
    cout << &list[2] << endl;

    //문자열 배열 출력
    for (auto& s : list) {
        cout << (s+"야 안녕!") << endl;
    }
    return 0;
}
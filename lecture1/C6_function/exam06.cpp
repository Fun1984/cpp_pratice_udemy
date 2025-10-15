// 유틸리티 함수에 대한 실습 - 3
// Sleep(int) : CPU의 일시정지(timed waiting) 상태로 만든다. 
// 단, 중요한 것은 매개변수로 값이 들어가는 정수는 ms 단위. 
// 리눅스는 소문자 sleep이고, c++은 Sleep이니 주의

#include <iostream>
#include <cstdlib>
#include <windows.h> //c언어꺼를 땡겨씀.

using namespace std;

int main(void) {
    cout << "5초 뒤에 디렉토리 출력" << endl << endl;
    Sleep(5000); // 5초 뒤에 디렉토리 출력
    cout << "디렉토리 출력" << endl;
    system("dir");

    return 0;
}
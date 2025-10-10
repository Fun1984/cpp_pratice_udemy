// auto 키워드 : 자동변수. (C++ ver11이후) 자료형 생략 키워드 = 자동타입추론(automatic type deduction)

#include <iostream>
#include <string>

using namespace std;

auto add(int x, int y) { // 함수 매개변수에는 auto 사용 불가능.
    return x+y; //int + int = int // int + double =double
} 

int main(void) {

    double d = 1.0; //double(8byte)형 타입인 d에다가 1.0으로 초기화
    auto ad = 1; // 자동타입추론에 근거해 대입값에 따라 자료형 변경
    auto result = 0;
    result = add(10, 20.11);

    cout << "변수 d의 크기 : " << sizeof(d) << endl;
    cout << "변수 ad의 크기 : " << sizeof(ad) << endl;

    cout << "변수 add의 리턴값 : " << add(5,2.33) << ", 바이트 크기 : " << sizeof(result) << endl;
    cout << "result : " << result << endl;

    return 0;
}
// 함수에 인수를 전달하는 2가지 방법
// 1. 값에 의한 호출(call by value) : 사용자 정의 함수 호출 시, 인수 값 자체 전달된 값이 함수의 매개변수로 복사됨. 
//   호출한 곳에 영향을 끼치지 않음. 
//   무조건 매개변수의 개수와 타입, 순서가 반드시 일치해야 함.
//   리턴 타입도 동일해야 함.
//   "동생아 지금 몇 시니? 4시에요 형" -> 시간 값만 알고 수정은 불가

#include <iostream>

using namespace std;

int call_value(int);

int main(void) {

    int num = 100, call_after = 0;

    cout << "[main() 함수 영역]" << endl;
    cout << "함수 호출 전> num의 값 : " << num << endl;
    cout << "함수 호출 전> num의 주소 값 : " << &num << endl;
    cout << "함수 호출 전> call_after의 주소 값 : " << call_after << endl;
    cout << "함수 호출 전> call_after의 주소 값 : " << &call_after << endl;

    call_after = call_value(num);

    cout << "[main() 함수 영역으로 돌아옴]" << endl;
    // call by value에서는 인수값의 영향을 전혀 끼치지 아니한다.
    cout << "함수 호출 후> num의 값 : " << num << endl;
    cout << "함수 호출 후> num의 주소값 : " << &num << endl;
    cout << "함수 호출 후> call_after의 값 : " << call_after << endl;
    cout << "함수 호출 후> call_after의 주소 값 : " << &call_after << endl;

    return 0;
}

//사용자 정의 함수 구현
int call_value(int num) {
    //main() 함수에서 넘어오는 num값이 100인 매개변수 num에 복사가 이루어진다.

    cout << "[call_value() 함수 영역]" << endl;
    cout << "복사된 num의 값 : %d" << num << endl;
    // main()의 num 변수 주소와 call_value()의 num 변수 주소값은 완전히 다르다.
    cout << "call_value() 함수의 num의 주소값 : %d" << &num << endl;
    cout << "함수 수행 > 복사되어진 값 100에 50을 더하여 main()로 반환함" << endl;

    num += 50;
    cout << "함수 수행 완료 > main()로 반환 완료됨" << endl << endl;

    return num;
}
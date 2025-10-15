//for문 실습-4(5의 배수 누적합계)

#include <iostream>

using namespace std;

int main(void) {

    //사용자로부터 입력한 수까지 존재하는 5의 배수 누적합계 계산 프로그램
    int input_num = 0, hap =0;
re:
    cout << "어디까지 5의 배수를 구할까요? : ";
    cin >> input_num;

    if (cin.fail()) {
        cout << "잘못된 입력값입니다. 양의 정수값만 입력해주세요." <<endl;
        cin.clear(); // 오류 스트림을 초기화
        cin.ignore(256, '\n'); // 버퍼 비우기
        goto re;
    }

    for (int i = 5; i <= input_num; i+=5) {
        hap += i;
        cout << i << "까지 5의 배수 누적 합계 출력 : " << hap <<endl;
    }

    return 0;
}
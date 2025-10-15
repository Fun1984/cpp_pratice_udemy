//더블루프에 대한 실습-1
// 구구단

#include <iostream>

using namespace std;

int main(void) {
    //곱셈 저장 변수만 선언
    int gob = 0;
    //외부루프 초기값이 무조건 딱 한 번만 초기화.
    for (int dan =2; dan <= 9; dan++) {
        // 내부루프 초기값은 외부 루프의 루핑만큼 초기화. 
        for (int cnt = 0; cnt <= 9; cnt++) {
            gob = dan * cnt; // 구구단 계산
            cout << dan << " * " <<cnt << " = " << gob;
            cout << " : 외부 for문 " << dan << "일 때 내부 for문은 " << cnt << endl;
        }
        cout << endl;
    }


    return 0;
}
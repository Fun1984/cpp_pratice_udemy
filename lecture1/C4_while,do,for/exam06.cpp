//for문 실습 - 2 (누적 합계 구하기)

#include <iostream>
using namespace std;

int main(void) {
    
    int hap = 0;

    for (int i = 1; i<=100; i++) {
        hap += i; // hap = hap + i; -> 복합대입 연산자를 활용
        cout << i << "까지 누적합 출력 : hap = " << hap << endl;
    }
    cout << "1 + 2 + 3 ~~~~ + 99 + 100 = "<< hap <<endl;

    return 0;
}
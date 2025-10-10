//종합실습 예제
//정수형 변수 2개 선언하여, 1~100까지 루핑
// 누적합이 3000 이상이 될 때, 
// 루프를 빠져나가는 프로그램 작성
// 출력결과 : 1~77합 : 3003

#include <iostream>

using namespace std;

int main(void) {

    int sum = 0;
    int b = 0;

    for (int i=1; i<=100; i++) {
        sum += i;
        b = i;
        if (sum >= 3000) {
            break;
        }
    }
    cout << "1~" << b << " 합 : " << sum <<endl; 
    

    return 0;
}
//#pragma once <- visual 스튜디오에서 제공하는 간편한 전처리기.
// 어떠한 코드나 헤더파일이 다른 코드나 헤더에서 include될 때, 중복되어 복사되는 것을 방지하는 기능. 
// visual 스튜디오 에서만 종속적으로 기능하기에, 다른 프로그램에서는 작동하지 않음. 
// #pragma once 
#include <iostream>

using namespace std;

//사용자로부터 정수를 입력받는 함수
int get_integer(void) {
    
    int num = 0;
    cin >> num ;

    return num;
}

//거듭제곱을 구하는 함수
int power(int x, int y) {
    int result = 1, i = 0;

    // int re = pow(x, y); //cmath 헤더파일의 모든 정보를 가져와야 되므로, 용량이 커진다.
    // 아래는 직접 pow()함수를 구현
    for (i = 0; i < y; i++) {
        result *= x;
    }

    return result;
}

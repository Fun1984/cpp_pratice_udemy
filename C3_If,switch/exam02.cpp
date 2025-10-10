//if~else 구문 (50% 확률)

//홀수와 짝수 구분 프로그램
#include <iostream>

using namespace std;

int main(void) {
    int num = 0;
    int result = 0;

    cout << "0 초과 및 음수 제외 정수 입력 : ";
    cin >> num;

    //result가 0이면 짝수, 1이면 홀수
    // result = num % 2;

    // if(result != 0) {
    // if ((num%2) != 0) {
    if (int result = (num % 2) != 0) { //프로그래머 성향에 따라 이렇게 작성할 수도 있음
        cout << "입력한 정수 값은 " << num << " \'홀수\' 입니다." << endl;
    }
    else {
        cout << "입력한 정수 값은 " << num << " \'짝수\' 입니다." << endl;
    }

    return 0;
}


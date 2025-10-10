//종합실습 예제-2
//사용자로부터 하나의 정수 입력 받고, 해당하는 값까지 피보나치 수열 출력 프로그램 작성

#include <iostream>

using namespace std; 

int main(void) {

    // n1, n2는 더해지는 앞의 두 수, n3는 출력되는 피보나치 수열 값
    int n1 = 1;
    int n2 = 1;
    int n3 = 1;
    int input_num = 0;
    
    cout << "정수 하나를 입력하세요 : ";
    cin >> input_num;

    for (int i = 1; n3 < input_num; i++){
        if(i < 3) {
            n3 = 1;
        }
        else { //i값이 3 이상
            n3 = n1 + n2; // 앞의 두 개 수를 더한 다음 출력될 수 결정.
            n1 = n2;
            n2 = n3;
        }
        //피보나치 수열값 출력
        if (n3 < input_num) {
            cout << n3 << " ";
        }
    }
    cout << endl;
    
    return 0;
}
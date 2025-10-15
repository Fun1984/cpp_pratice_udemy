// for문 실습-3 (홀수 합계 구하기)

#include <iostream>
using namespace std; 

int main(void) {

    int odd_sum = 0;

    // 증감식에서 i값은 2씩 증가하므로, 홀수값이 누적이 되는 것이다. 
    for (int i = 1; i <= 10; i+=2){
        odd_sum += i;
        cout << i << "까지 홀수의 누적합 출력 : odd_sum : " << odd_sum << endl;
    }

    cout << "1 + 3 ~ 7 + 9 홀수의 합은 " << odd_sum << "입니다." <<endl;
    


    return 0;
}
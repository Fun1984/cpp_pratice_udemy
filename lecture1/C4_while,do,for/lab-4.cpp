//종합실습 예제-4(while)
//사용자로부터 상품 가격 입력 받아, 그 합계 구하기.

#include <iostream>
// #include <string>

using namespace std;

int main(void) {
    bool flag = true;

    int price = 0;
    int total = 0;
    // string str = NULL;
    while (flag) {
        cout << "상품금액 입력( 0 입력 시, 프로그램 종료) : ";
        cin >> price;

        //탈출 코드
        if (price == 0) {
            cout << "상품의 총 가격 : " << total <<"원!" <<endl;
            flag = false;
            break;
        }
        total += price;
        
    }
    
    

    return 0;
}
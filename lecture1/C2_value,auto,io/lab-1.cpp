//종합실습예제-1
//철수가 최대한 사탕을 사려고 한다.
// 1000원을 갖고 있고, 사탕은 300원
// 최대 구매 사탕 개수와 나머지돈은 얼마인가? 
// -> / 와 % 를  사용하여 아래와 같이 출력

//출력결과
// 현재 가지고 있는 돈 : 1000
// 캔디의 가격 : 300
// 최대로 살 수 있는 캔디의 개수 = 3
// 캔디 구입 후 남은 돈 = 100
// 계속 하려면 아무 키나 누르십시오 .. 

#include <iostream>
#include <string>

using namespace std;

int main (void) {
    int money = 0;
    int candy_price = 300;
    
    int available_candy = 0;
    int remain = 0;

    cout << "현재 가지고 있는 돈 : ";
    cin >> money ;
    // cout << endl;
    
    cout << "캔디의 가격 :" << candy_price << endl;
    
    available_candy = money / candy_price;
    remain = money % candy_price;
    cout << "최대로 살 수 있는 캔디의 개수 : " << available_candy << endl;
    cout << "캔디 구입 후 남은 돈 : " << remain << endl;
    
    return 0;
}
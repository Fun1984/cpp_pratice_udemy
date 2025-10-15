//종합 실습 예제-2
//화씨 온도를 섭씨 온도로 바꾸기
//섭씨 온도 = 5/9(화씨온도 - 32) -> 공식

#include <iostream>
#include <string>

using namespace std;

int main(void) {
    float F_temp = 0.0f;
    float C_temp = 0.0f;
    

    cout << "화씨온도 : ";
    cin >> F_temp;

    C_temp = (F_temp-32) * (5.0f/9.0f);
    cout << "화씨온도 " << F_temp <<"도는 섭씨온도 " << C_temp <<"도 입니다." <<endl;

    return 0;
}
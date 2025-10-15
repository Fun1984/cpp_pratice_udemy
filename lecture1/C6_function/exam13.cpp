//디폴트 변수를 사용 시 주의사항
//어떤 함수도 디폴트 인수를 가질 수 있다. 
// 하나의 규칙이 존재함. 디폴트 인수는 반드시 마지막 인수여야만 한다.
// 반대로 할 시 , 논리 구조상 컴파일러가 어떤 게 디폴트인지 못 앎. 

#include <iostream>

using namespace std;

//기본인수가 마지막에 있을 시, 경고 발생  
int print(int num1, int num2=0, int num3=50) {
    int result = num1 + num2;
    return result;
}

int main(void) {
    int result = 0;
    result = print(10);
    cout << result << endl;
    result = print(10,20);
    cout << result << endl;
    result = print(10,20,30);
    cout << result << endl;
    
    return 0;
}

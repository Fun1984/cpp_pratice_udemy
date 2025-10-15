// 사용자 정의 함수에 대한 실습 - 2
//사용자 정의 함수를 헤더파일로 함수 모듈화 하기

#include "my_power.h" //사용자가 만든 헤더파일은 <>가 아니라, ""를 사용함.
// 사용자 헤더파일에 들어간 헤더파일과 기능들은 같이 따라간다. 
// .h <- 이 부분이 없어도 된다. (파일도 동일한 형태여야 함.)
// using namespace도 가져옴. 

int main(void) {

    int num1 = 0, num2 = 0, result = 0;
    cout << "거듭제곱 대상 정수를 입력하세요 : ";
    num1 = get_integer(); //get_integer() 호출

    cout<< "지수(승)를 입력하세요 : ";
    num2 = get_integer();

    result = power(num1, num2);

    cout << num1 << "의 " << num2 <<"승은 " <<result <<"입니다." <<endl<<endl;

    return 0;
}
//수학 함수(내장 함수)에 대한 실습-1

#include <iostream>
#include <cmath> //c언어에는 math.h 파일이 있음. // 수학함수 라이브러리

using namespace std;

int main(void) {
    
    double result = 0.0, target = 3.58;
    cout << "double형 변수 target의 값 : " << target << endl;
    
    result = ceil(target); // 무조건 올림 처리
    cout << "올림 함수 ceil()의 사용 결과 값 : " << result << endl;

    result = floor(target); // 무조건 내림 처리
    cout << "내림 함수 floor()의 사용 결과 값 : " << result << endl;

    result = round(target); // 반올림 
    cout << "반올림 함수 round()의 사용 결과 값 : " << result << endl << endl;

    target = -1.0;
    result = fabs(target); //절댓값 출력
    cout << "절댓값 함수 fabs()의 사용 결과 값 : " << result << endl << endl;

    

    return 0;
}

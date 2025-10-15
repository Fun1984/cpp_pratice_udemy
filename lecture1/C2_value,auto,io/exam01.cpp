// 변수 : 변할 수 있는 값. 프로그램 내 데이터 저장 메모리 공간

#include <iostream>
#include <string>

using namespace std;

int main(void) {
    // 변수명 작성 
    // 숫자로 시작 X
    // 변수명 사이 공백 X 
    int age = 0;
    int i{100}; // int i = 100;
    
    bool flag = true;
    cout << flag << endl;

    short b = 0;
    // 자료형의 크기. suzeof(데이터 타입, 변수명)
    // to_string(정수) : 정수값을 문자열 타입으로 변경시켜주는 string 헤더파일 존재하는 메소드
    cout << "char형 자료형의 크기 : " + to_string(sizeof(char)) << endl;
    cout << "short형 자료형의 크기 : " + to_string(sizeof(short)) << endl;
    cout << "int 자료형의 크기 : " + to_string(sizeof(int)) << endl;
    cout << "long형 자료형의 크기 : " + to_string(sizeof(long)) << endl;
    cout << "long long형 자료형의 크기 : " + to_string(sizeof(long long)) << endl;
    cout << "float 자료형의 크기 : " + to_string(sizeof(float)) << endl;
    cout << "double형 자료형의 크기 : " + to_string(sizeof(double)) << endl;
    cout << "long double형 자료형의 크기 : " + to_string(sizeof(long double)) << endl;
    cout << "bool형 자료형의 크기 : " + to_string(sizeof(bool)) << endl;
    
    // 변수의 주소 확인
    // 변수는 메모리 스택에 비연속적으로 빈공간을 찾아 들어간다.
    // &(앰퍼센트) : 주소 참조 연산자
    cout << "변수 age의 주소 : " << &age << endl;
    cout << "변수 i의 주소 : " << &i << endl;
    cout << "변수 b의 주소 : " << &b << endl << endl;

    // string 타입(문자열)
    // 문자열 끼리는 +연산자로 결합 가능
    string s1 = "안녕하세요.";
    string s2 = "반갑습니다.";
    string s3 = s1 + "  " + s2 + "!!!";
    cout << s3 << endl;

    cout << "변수 s1의 주소 : " << &s1 << endl;
    cout << "변수 s2의 주소 : " << &s2 << endl;
    cout << "변수 s3의 주소 : " << &s3 << endl;

    bool equal = (s1 == s2);
    cout << "s1 == s2 : " << equal << endl;

    const double TAX_RATE = 0.25; //기호 상수 선언 및 초기화
    // 상수는 초기화 시, 다른 값 저장 못함

    int garbage;
    
    return 0;
}
//#pragma once <- visual 스튜디오에서 제공하는 간편한 전처리기.
// 어떠한 코드나 헤더파일이 다른 코드나 헤더에서 include될 때, 중복되어 복사되는 것을 방지하는 기능. 
// visual 스튜디오 에서만 종속적으로 기능하기에, 다른 프로그램에서는 작동하지 않음. 
#pragma once 
#include <iostream>

using namespace std;

//double add(int x, int y)
double add(int x, int y) {
    double result = 0.0;
    result = x + y;
    cout << "덧셈 함수 호출 후 " << result<<"입니다." << endl;
    return result;
}
//double sub(int x, int y)
double sub(int x, int y) {
    double result = 0.0;
    result = x - y;
    cout << "뺄셈 함수 호출 후 " << result<<"입니다." << endl;
    return result;
}
//double mul(int x, int y)
double mul(int x, int y) {
    double result = 0.0;
    result = x * y;
    cout << "곱셈 함수 호출 후 " << result<<"입니다." << endl;
    return result;
}
//double div(int x, int y)
double div2(int x, int y) {
    double result = 0.0;
    result = x / y;
    cout << "나눗셈 함수 호출 후 " << result<<"입니다." << endl;
    return result;
}
//int remain(int x, int y)

int remain(int x, int y) {
    int result = 0;
    result = x % y;
    cout << "나눗셈 함수 호출 후 나머지는 " << result<<"입니다." << endl;
    return result;
}
//배열에 대한 실습-2
//배열 크기(길이, length)는 []안에 0을 초과하는 정수값이 들어가야 함. 
// 몇 개 배열방을 만들지 지정해야 함.
// 동적 배열의 문제는
// 인덱스 초과 시, 저장공간부족 발생
// 적게 들어올 시, 메모리 낭비 발생
// 배열 선언 시, []안에 변수명이나 음수, 실수값 지정시 컴파일 에러 발생.

#include <iostream>
#define LENGTH 3
using namespace std;


int main(void) {

    // int length = 5;
    // int arr[length]; // 변수가 배열 크기로 들어갈 시, 컴파일 에러 발생.
    // int socre[0] = {0}; // 배열  크기는 0보다 커야함.
    // int score[-5] = {0}; // 배열 크기는 음수값이 안됨.
    // float score[5.77] = {0.0f}; //실수값도 컴파일 에러 발생.
    // double score[10] = {0.0}; //배열의 크기로 정수형 상수값이 들어가니, 에러 없음.

    //배열은 메모리에 연속된 공간 할당. 배열 크기 0 초과 정수형 상수값을 허용함. 
    //현업에서는 #define 기호(매크로) 상수로 값 치환함 <- 정적 배열 크기 지정. 
    //배열 크기 변동 시, 매크로 상수 값만 변경시켜주면, 유지보수가 편리하기 때문.
    int score[LENGTH] = { 0 };//매크로 상수 
    
    int jumsu[] = {10,20,30,40,50}; //[]크기를 주지않고 초기화 시, 컴파일러가 알아서 크기 잡아줌.
    // int arr[LENGTH] = {10,20,30,40}; //배열 크기 3일 시, 4개를 넣으면 에러.
    int min[LENGTH];
    min[2] = 50;
    for (int i : min) {
        cout << i << " ";
    }
    cout << endl; 

    for (int i = 0; i<LENGTH; i++) {
        cout << score[i] << " ";
    }
    cout << endl;
    cout << "socre배열의 바이트 수 : " << sizeof(score) << endl;

    for (int i : score) {
        cout << i << " ";
    }
    cout << endl;

    cout << "jumsu배열의 주소값 : " << jumsu << endl;
    cout << "jumsu[0]배열의 주소값 : " << &jumsu[0] << endl;

    for(int i=0; i<sizeof(jumsu)/sizeof(int); i++) {
        cout << jumsu[i] << " ";
    }
    cout << endl;

    for (int i : jumsu) { //범위 기반 for루프는 jumsu라는 공간에서 1개씩 값을 int i 변수에 복사됨.
        cout << i << " ";
    }

    //배열 사용 시 주의사항
    // 1.배열 인덱스는 항상 0부터 시작.
    // 2.배열명은 곧 주소이다. (배열[0]의 주소값과 동일)
    // 3.배열선언과 함께 초기화 시, 배열크기는 생략 가능(권고 아님)
    // 4.배열크기보다 큰 인덱스 값 저장 및 출력 시, 에러 발생(방 없음)
    // 5.배열특징 인덱스만 값을 초기화 시, 다른 나머지 방들은 전부 쓰레기값으로 채워짐.
    
    return 0;
}

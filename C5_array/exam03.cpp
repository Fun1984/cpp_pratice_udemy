//배열에 대한 실습 - 3
//범위기반 for루프와 참조자에 대해서 살펴보도록 하자.

#include <iostream>

using namespace std;

int main(void) {

    int list[10] ={1,2,3,4,5,6,7,8,9,10};
    //범위 기반 for 루프
    for (int i : list) {
        i = i*i;
        cout << i << " ";
    } // 해당 코드로 원본 배열 값 변경할려고 해도 변경 안됨. // 그 순간만 바뀜.
    cout << endl;
    for(int i : list) {
        cout << i << " ";
    }
    cout << endl;

    //참조자(reference) : 변수 하나 선언 시, 데이터타입 맞게끔 메모리에 컴파일
    // 데이터 타입 크기만큼 할당 시켜줌. 그러면 주소가 생김.
    // 참조자라는 것이 바로 할당된 메모리 공간에 다른 이름을 붙이는 것
    // 자신이 참조하는 변수를 대신할 수 있는 또 하나의 이름이고, 쉽게 말해 별명이라고 보면 됨.
    int score1 = 10;
    // score1을 참조하는 score2, 참조자
    int& score2 = score1; //score2는 같은 주소값을 가짐.
    // 참조자는 조건이 있음. 이미 선언된 변수에 대해서만 선언 가능
    // int& num1 = 2; // 상수같은 리터럴은 참조 불가
    // int& num2; // 참조값 없을 시도 선언 불가
    // int& num3 = NULL; //NULL값도 참조가 불가능함
    cout << score1 << endl;
    cout << score2 << endl;
    cout << &score1 << endl;
    cout << &score2 << endl;
    
    for (int& i : list) {
        i = i*i; // 참조자로 주소를 알아서, 해당 배열 값 변경 가능
        cout << i << " ";
    } 
    cout << endl;
    for(int i : list) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
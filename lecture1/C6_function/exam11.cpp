//중복함수(overload function)에 실습

// 함수의 선언부
// 매개변수의 개수, 타입, 순서를 시그니쳐라고 한다.
// 함수이름을 아끼면서, 프로그래머도 여러 개의 함수를 외울 필요가 없다. 

//overload : 과적하다, 부담을 많이 지우다.
// 중복함수는 함수명이 같아야 한다. 
// 매개변수의 시그니처가 달라야 한다. 
// 매개변수는 같고 리턴타입이 다른 경우는 오버로딩 성립에 관여하지 않는다. 

#include <iostream>

using namespace std;

int add(int x, int y);
// long add(int x, int y); //리턴타입은 오버로딩 성립 관여 X, 오직 매개변수 개수,순서,타입에 의해 결정
double add(double x, double y);
int add(int arr[], int size);
int add(int size, int* ptr);

int main(void) {

    int x = 10, y = 20;
    double d_x = 1.88, d_y = 1.99;
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    int size = sizeof(arr) / sizeof(int);
    int* ptr = arr; // arr배열명은 주소이기 때문에 ptr에 대입 가능.

    cout << "add(int x, int y) 호출 후의 값 : " << add(x, y) << endl << endl;
    cout << "add(double x, double y) 호출 후의 값 : " << add(d_x, d_y) << endl << endl;
    cout << "add(arr[], size) 호출 후의 값 : " << add(arr, size) << endl << endl; //int arr[],  
    cout << "add(size, ptr) 호출 후의 값 : " << add(size, ptr) << endl << endl; // 시그니처(개수, 타입, 순서) 내 순서 변경도 구분점이 된다. 

    return 0;
}

// 중복함수는 매개변수는 다르지만 add(더하기 기능)와 같은 기능을 하는 것은 동일하다. 
// 배열명이 넘어가면, 주소값이 들어있는 바이트 크기만 넘어간다.
int add(int x, int y) {

    return x+y;
}
double add(double x, double y) {

    return x+y;
}
int add(int arr[],int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}
// g함수 구현에 있어서, 주소가 동일하게 넘어오고 매개변수의 갯수와 순서, 타입이 같다면
// 동일하게 인식을 하고 이전에 정의 되어진 내용을 먼저 선택한다
int add(int size, int* ptr) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += ptr[i];
    }
    return sum;
}

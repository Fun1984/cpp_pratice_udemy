//배열에 대한 실습-1
//배열은 같은 데이터타입의 많은 양의 데이터 처리를 위한 자료구조이다.
//연속된 메모리 공간(스택공간=정적공간)을 할당받는다.
//기본형 데이터 타입 배열 선언 시, 초기화를 하지 않으면 아무값이나 들어간다. 


#include <iostream>

using namespace std; 

int main(void) {
    
    //문자형 배열
    char char_name[10];// = {"ABCDEFGHI"}; // 1 * 10 = 10바이트
    short short_name[10];// = {0,1,2,3,4,5,6,7,8,9}; //20바이트
    int int_name[10] = {0,1,2,3,4,5,6,7,8,9}; //40바이트
    //int int_name[10] = {0}; // <- 모든 값이 0으로 들어감. 주소값은 다름. 
    double double_name[10] = {0,1,2,3,4,5,6,7,8,9}; //80바이트
    cout << "char_name 배열의 시작 주소 : " << &char_name << endl;

    // char_name[i] : 일반 변수와 동일하다.
    //ostream(출력스트림)이용 시, C++는 문자형 배열을 string타입으로 인식한다. 
        // string 타입은 문자열 끝의 '\0'인 NULL문자가 안들오지 않으면 끝났다고 인식 안함.
        // = Zero-Terminated 구조. 
        // null문자를 받지못하여, char형 배열은 주소 출력 시 주소가 안나옴. 
    // char 외 다른 자료형은 문제없이 주소가 다 잘 출력됨.
    // for(int i=0; i<10; i++) {
    //     cout << "char_name [" << i << "]배열의 시작 주소 : " << &char_name[i] << endl;
    // }
    for(int i=0; i<10; i++) {
        cout << "char_name [" << i << "]배열의 시작 주소 : " << reinterpret_cast<void *>(char_name[i]) << endl;
        cout << "char_name [" << i << "]배열의 값 : " << char_name[i] << endl;
    }
    
    for(int i=0; i<10; i++) {
        cout << "short_name [" << i << "]배열의 시작 주소 : " << &short_name[i] << endl;
        cout << "short_name [" << i << "]배열의 값 : " << short_name[i] << endl;
    }
    
    cout << endl;

    for(int i=0; i<10; i++) {
        cout << "int_name [" << i << "]배열의 시작 주소 : " << &int_name[i] << endl;
    }

    cout << endl;

    for(int i=0; i<10; i++) {
        cout << "double_name [" << i << "]배열의 시작 주소 : " << &double_name[i] << endl;
    }

    // 결론 : 모든 변수, 배열, 객체 등은 초기화를 안할 시, 쓰레기(가비지) 값으로 저장된다. 
    // => 초기화를 처리해야 한다. 
    return 0;
}
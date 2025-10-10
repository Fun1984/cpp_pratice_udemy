// 함수에 인수를 전달하는 2가지 방법
// 2. 참조에 의한 호출(call by reference) : 참조에 의한 호출 방식은 함수 호출 시, 인수값 넘기는 것이 아니고 메모리 주소값을 넘긴다. 
// C++에는 참조자가 있어, 주소값 대신 참조자를 넘기는 방법이다. 
// 참조자는 NULL로 초기화가 불가하고
// 성선언과 동시에 변수의 별명이다. C++에서 참조에 의한 호출은 호출 시, 원본값이 넘어감
// 호출한 곳에 영향을 끼침

#include <iostream> 

using namespace std; 
//함수 원형
int call_reference(int& num);
int call_reference(int* num);

int main(void) {
    int num = 100, call_after = 0;
    // int& ref_num = NULL; //참조자는 NULL로 초기화가 안된다. 선언과 동시에 초기화해야 함.
    int& ref_num = num; //변수num의 별명으로 참조자를 ref_num도 num과 같은 형태.
    int* ptr_num = NULL; //포인터 변수는 null로 초기화가 가능하다.
    ptr_num = &num; //포인터 변수ptr_num에 변수 num의 주소가 들어가 있다.

    cout << "[main()영역]" << endl;
    cout << "num의 값 : " << num << endl;
    cout << "num의 주소값 : " << &num << endl; 
    cout << "ref_num의 값 : " << ref_num << endl;
    cout << "ref_num의 주소값 : " << &ref_num << endl; 
    cout << "ptr_num의 값 : " << ptr_num << endl;
    cout << "ptr_num의 주소값 : " << &ptr_num << endl;

    //참조자를 매개변수로 주고, main()함수의 num의 별칭인 원본값을 넘기고 있다.
    call_after = call_reference(ref_num);
    cout << "[main()영역으로 다시 돌아옴]" << endl;
    cout << "num의 값 : " << num << endl;
    cout << "num의 주소값 : " << &num << endl; 
    cout << "ref_num의 값 : " << ref_num << endl;
    cout << "ref_num의 주소값 : " << &ref_num << endl; 
    cout << "ptr_num의 값 : " << ptr_num << endl;
    cout << "ptr_num의 주소값 : " << &ptr_num << endl;
    cout << "ptr_num의 이용하여, num 간접참조하여 num값 : " << *ptr_num << endl;

    //C언어에서 사용되는 포인터를 통한 참조에 의한 호출
    call_after = call_reference(&num);
    cout << "[main()영역으로 다시 돌아옴]" << endl;
    cout << "num의 값 : " << num << endl;
    cout << "num의 주소값 : " << &num << endl; 
    cout << "ref_num의 값 : " << ref_num << endl;
    cout << "ref_num의 주소값 : " << &ref_num << endl; 
    cout << "ptr_num의 값 : " << ptr_num << endl;
    cout << "ptr_num의 주소값 : " << &ptr_num << endl;
    cout << "ptr_num의 이용하여, num 간접참조하여 num값 : " << *ptr_num << endl;

    return 0;
}


//call_reference() 함수가 중복 정의(C++, Java 허용)
//참조자가 매개변수로 넘어온 경우
int call_reference(int& num) {
    cout << endl;
    cout << "[call_reference(참조자)]의 함수 영역" << endl;
    cout << "num의 값 : " << num << endl;
    cout << "num의 주소값 : " << &num << endl; 
    num += 150;
    cout << "[call_reference]의 함수 수행 완료" << endl << endl;
    return num;
}
//메모리 주소가 매개변수로 넘어온 경우
int call_reference(int* num) {

    cout << endl;
    cout << "[call_reference(포인터)]의 함수 영역" << endl;
    cout << "num의 값 : " << *num << endl;
    cout << "num의 주소값 : " << num << endl; 
    *num += 50;
    cout << "[call_reference]의 함수 수행 완료" << endl << endl;
    return *num;
}
// 결론 : 참조자는 포인터가 많이 어려워 C++에서 참조자, 자바에서 참조변수로 등장한 것임. 
// 참조자,참조변수 = 포인터다. 
// C++에서 참조자가 등장하고, 참조자를 많이 쓰라고 권하는 이유는 명백하기 때문에, 
// 포인터 지식 부족하면 참조자를 쓰고, 포인터 잘 쓰면은 포인터를 쓰면된다. 

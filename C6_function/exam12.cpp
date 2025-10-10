// 디폴트 인수(Default arguments)
// 인수를 전달하지 않아도, 함수에서 디폴트 값을 대신 넣어주는 기능. 


#include <iostream>

using namespace std;
//디폴트 인수 값을 지닌 함수는 main() 함수 위에 적어야 한다.

// main()에서 인수값 미전달 시, 디폴트 매개변수값으로 선언부에 선언함으로써
// 디폴트 변수를 사용하고, main()에서 인수값이 넘어오면 그 값으로 대체되어 함수 실행
void display(char c='*', int n=10) {

    for(int i = 0; i < n; i++) {
        cout << c;
    }
    cout << endl;
    return ;
}

int main(void) {

    cout << "아무런 인수가 전달되지 않은 경우 : " << endl;
    display();

    cout << "첫 번째 인수만 전달된 경우 : " << endl;
    display('$');

    cout << "첫 번째 인수만 전달된 경우 : " << endl;
    display('#', 5);


    return 0;
}


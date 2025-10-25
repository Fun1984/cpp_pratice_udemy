//멤버 함수 중복 정의 - 실습
//멤버 함수도 함수의 일종. 단지, 클래스 안에 존재하는 게 특징이다.
// 아울러 멤버 함수도 디폴트 변수를 사용할 수 있다.

#include <iostream>
#include <string>

using namespace std;

class PrintData{
    public:
        void print(int i) {
            cout << i << endl;
        }
        void print(double d) {
            cout << d << endl;
        }
        void print(string s = "No Data") {
            cout << s << endl;
        }
};


int main(void) {

    PrintData obj;
    obj.print(100); //매개변수가 int값
    obj.print(3.141592); //매개변수가 double값
    obj.print("Hello"); //매개변수가 string이다.
    obj.print();
    //매개변수의 타입, 개수, 순서에 따라서 호출되는 함수가 틀리다. 

    
    return 0;
}
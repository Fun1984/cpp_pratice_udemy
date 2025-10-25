//객체지향 프로그램 실습 - 1
// 클래스 : 객체지향 프로그래밍에서 특정 객체 생성 위한 멤버변수, 멤버함수 정의하여 만드는 일종의 형틀, 붕어빵틀, 설계도라고 한다. 
// 클래스 통한 정의를 잘 할 시, 객체(인스턴스)들을 만드는 방법
// 단, 동일 클래스에 나온 인스턴스를 보게 되면, 물리적으로 멤버변수들은 제각각 값을 가질 수 있는 메모리 공간을 가지고 있지만, 멤버 함수는 공유가 이루어진다.

#include <iostream>
#include <string>
using namespace std;

class Circle {
    private :
    public :    // 외부에서 값을 맘대로 접근할 수 있다.
        int radius = 0;
        string color = "Red";
        // double calcArea() {
        //     return 3.14 * radius * radius;
        // }
        // int getRadius() {
        //     return this->rawwdius;
        // }
        // string getColor() {
        //     return this->color;
        // }
};

int main(void) {
    // 스택에다가 클래스 내용을 메모리 올리는 방법
    Circle circle;
    cout << circle.radius << endl; 
    // cout << circle.getColor() << endl; 
    // cout << circle.calcArea() << endl; 

    circle.radius = 100;
    circle.color = "blue";

    cout << circle.radius << endl; 
    cout << circle.color << endl;
    return 0;
}
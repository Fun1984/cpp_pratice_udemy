//객체지향 프로그램 실습 - 3
//Time 클래스 만들기
//접근 제어자(지정자)
//1.private : 같은 클래스 내에서만 접근 가능
//2.protected : 같은 클래스 내 혹은 이 클래스를 상속받는 자손클래스에서 접근 가능
//3.public : 누구나 다 접근이 가능
//getter() : 멤버변수 값을 리턴
//setter() : 멤버변수 값을 지정

// 객체지향 프로그램이란, 멤버변수는 웬만하면 private접근 제어자로 감싸준다(은닉화)
// 각 멤버변수 해당하는 getter()를 제공하여, 클래스 작성하는 것이 올바른 방법이다. 

#include <iostream>
#include <string>

using namespace std;

class Time {
    //멤버변수를 접근제어자로 지정하지 아니하면, 기본적으로 private로 설정된다.
    int hour = 0;
    int minute = 0;
    int second = 0;

    public:
        //getter()
        int getHour() {
            return this->hour;
        }
        int getMinute() {
            return this->minute;
        }
        int getSecond() {
            return this->second;
        }
        //setter()
        void setHour(int hour) {
            //시간에 대한 예외 처리
            if (hour < 0 || hour > 23) {
                cout << "You put wrong time." << endl;
                
            } 
            this->hour = hour;
        }
        void setMinute(int minute) {
            //분에 대한 예외 처리
            if (minute < 0 || minute > 59) {
                cout << "You put wrong minute." << endl;
                
            }
            this->minute = minute;
        }
        void setSecond(int second) {
            //초에 대한 예외 처리
            if (second < 0 || second > 59) {
                cout << "You put wrong second." << endl;
                
            }
            this->second = second;
        }

        void timePrint() {
            // cout << "현재 시간 : " << this->hour << "시 " << this->minute << "분 " << this->second << " 초" << endl;
            cout << "current Time : " << this->getHour() << "Hour " << this->getMinute() << "Minute " << this->getSecond() << " Second" << endl;
        }
};

int main(void) {
    Time t1,t2;
    t1.timePrint();
    t1.setHour(12);
    t1.timePrint();
    t1.setMinute(53);
    t1.setSecond(57);
    t1.timePrint();

    cout << &t1 << endl;
    cout << &t2 << endl;
    return 0;
}
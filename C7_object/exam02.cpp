//객체지향 프로그램 실습 - 2
//Monitor 클래스 만들기

#include <iostream>
#include <string>

using namespace std;

class Monitor {
    public : 
        //멤버 변수
        string color = "black";
        int channel = 0;
        int volume = 0;
        bool power = false;
        
        //멤버 메소드
        void powerOn() { //void power(bool power) {// this는 이 power를 가리키지 않음 
            //this <- 클래스 인스턴스의 주소를 가리킴. 클래스 내부에서만 사용 가능하다. 
            if (!this->power) { 
                cout << "Moitor is turned on!" << endl;
                this->power = !this->power;
            }
            else {
                cout << "Monitor is turned off!" << endl;
                this->power = !this->power;
            }
        }
        // 채널 조작
        void channelUp() {
            this->channel++;
            cout << "current channel : " <<this->channel << endl;
        }
        void channelDown() {
            this->channel--;
            cout << "current channel : " <<this->channel << endl;
        }
        void volumeUp() {
            this->volume++;
            cout << "current volume : " <<this->volume << endl;
        }
        void volumeDown() {
            this->volume--;
            cout << "current volume : " <<this->volume << endl;
        }
        // 요약해서 보고자 할 때, 호출하면 유용한 함수
        
        void print() {
            cout << "current channel : " << this->channel << ", current volume : " << this->volume << endl;
        }
        
};

int main (void) {

    Monitor monitor;
    monitor.powerOn();
    monitor.channelUp();
    monitor.channelUp();
    monitor.channelUp();
    monitor.channelDown();
    monitor.channelDown();
    monitor.volumeUp();
    monitor.volumeUp();
    monitor.volumeUp();
    monitor.volumeDown();
    monitor.print();
    monitor.powerOn();

    return 0;
}
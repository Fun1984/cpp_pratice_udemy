//��ü���� ���α׷� �ǽ� - 2
//Monitor Ŭ���� �����

#include <iostream>
#include <string>

using namespace std;

class Monitor {
    public : 
        //��� ����
        string color = "black";
        int channel = 0;
        int volume = 0;
        bool power = false;
        
        //��� �޼ҵ�
        void powerOn() { //void power(bool power) {// this�� �� power�� ����Ű�� ���� 
            //this <- Ŭ���� �ν��Ͻ��� �ּҸ� ����Ŵ. Ŭ���� ���ο����� ��� �����ϴ�. 
            if (!this->power) { 
                cout << "Moitor is turned on!" << endl;
                this->power = !this->power;
            }
            else {
                cout << "Monitor is turned off!" << endl;
                this->power = !this->power;
            }
        }
        // ä�� ����
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
        // ����ؼ� ������ �� ��, ȣ���ϸ� ������ �Լ�
        
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
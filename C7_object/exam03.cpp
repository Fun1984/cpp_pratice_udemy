//��ü���� ���α׷� �ǽ� - 3
//Time Ŭ���� �����
//���� ������(������)
//1.private : ���� Ŭ���� �������� ���� ����
//2.protected : ���� Ŭ���� �� Ȥ�� �� Ŭ������ ��ӹ޴� �ڼ�Ŭ�������� ���� ����
//3.public : ������ �� ������ ����
//getter() : ������� ���� ����
//setter() : ������� ���� ����

// ��ü���� ���α׷��̶�, ��������� �����ϸ� private���� �����ڷ� �����ش�(����ȭ)
// �� ������� �ش��ϴ� getter()�� �����Ͽ�, Ŭ���� �ۼ��ϴ� ���� �ùٸ� ����̴�. 

#include <iostream>
#include <string>

using namespace std;

class Time {
    //��������� ���������ڷ� �������� �ƴ��ϸ�, �⺻������ private�� �����ȴ�.
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
            //�ð��� ���� ���� ó��
            if (hour < 0 || hour > 23) {
                cout << "You put wrong time." << endl;
                
            } 
            this->hour = hour;
        }
        void setMinute(int minute) {
            //�п� ���� ���� ó��
            if (minute < 0 || minute > 59) {
                cout << "You put wrong minute." << endl;
                
            }
            this->minute = minute;
        }
        void setSecond(int second) {
            //�ʿ� ���� ���� ó��
            if (second < 0 || second > 59) {
                cout << "You put wrong second." << endl;
                
            }
            this->second = second;
        }

        void timePrint() {
            // cout << "���� �ð� : " << this->hour << "�� " << this->minute << "�� " << this->second << " ��" << endl;
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
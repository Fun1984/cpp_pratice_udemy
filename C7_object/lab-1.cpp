//����-1
//CarŬ������ ���� Ȱ���غ���.
//������� : �ӵ�, ���, ����
//����Լ� : �ӵ� ���� �Լ�(10��ŭ ����)
//����Լ� : �ӵ� ���� �Լ�(10��ŭ ����)
//---------------------------------

#include <iostream>
#include <string> 

using namespace std;

class Car {
    private:
        int speed = 0;
        int gear = 0;
        string color = "Black";

    public:
        void setColor(string carColor="Black") {
            this->color = carColor;
            cout << "Changed Car Color : "<< this->color << endl; 
        }
        void carInfo() {
            cout << "< Car Information >" <<endl;
            cout << "Color : " << this->color << endl;
            cout << "Gear Level : " << this->gear << endl;
            cout << "Speed : " << this->speed << endl << endl;

        }
        void gearUp() {
            this->gear++;
            this->speed += 10;
            cout << "Speed Up : " << this->speed << endl;
        }
        
        void gearDown() {
            if (this->speed <= 0) {
                cout <<"Speed is 0. So Your order is impossible." << endl;
                return;
            }
            this->gear--;
            this->speed -= 10;
            cout << "Speed Down : " << this->speed << endl;
        }
};

int main(void) {
    Car car1;
    car1.carInfo();

    car1.setColor("Red");
    car1.gearUp();
    car1.gearUp();
    car1.gearUp();
    car1.gearUp();
    car1.carInfo();

    car1.gearDown();
    car1.gearDown();
    car1.setColor("Yellow");
    car1.setColor("Green");
    car1.carInfo();
    car1.gearDown();
    car1.gearDown();
    car1.gearDown();

    return 0;
}
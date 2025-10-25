//문제2
//클래스명 : SamsungPhone
//멤버변수 : 회사, 모델, 색상 ,출시년도 월
//멤버변수에 대한 getter(), setter()작성, 한눈에 볼 수 있는 printPhone()을 작성 해주도록 하자.
//setter()함수에 예외 처리도 추가
//멤버함수를 은닉화
//--------------------------------------------------------------------------------

#include <iostream>
#include <string>

using namespace std; 

class SamsungPhone {
    private :
        string company;
        string model;
        string color;
        int release;
    public : 
        //getter
        string getCompany() {
            return this->company;
        }
        string getModel() {
            return this->model;
        }
        string getColor() {
            return this->color;
        }
        int getRelease() {
            return this->release;
        }
        //setter
        void setCompany(string company) {
            this->company = company;
            //예외처리
            if (company != "Samsung") {
                cout << "This is not Samsung" << endl;
                return;
            }
        }
        void setModel(string model) {
            this->model = model;
            // if (model.compare("Galaxy3") == -1 || model.compare("Galaxy4") == -1 || model.compare("Galaxy5") == -1 || model.compare("Galaxy6") == -1) {
            //     cout << "This is not Samsung_Phone_Model" << endl;
            //     return;
            // }
            if (model=="Galaxy3" || model=="Galaxy4" || model=="Galaxy5" || model=="Galaxy6") {
            } else {
                cout << "This is not Samsung_Phone_Model" << endl;
                return;
            }
        }
        void setColor(string color) {
            this->color = color;
        }
        void setRelease(int release) {
            this->release = release;
        }
        void printPhone() {
            cout << this->getCompany() << "_Company's " << this->getColor() << "_Color " << this->getModel() << " and Release_Year is " << this->getRelease() << endl;
        }
};


int main(void) {
    SamsungPhone s1;
    // cout << s1.getCompany() <<endl;
    // cout << s1.getRelease() <<endl;
    s1.setCompany("Samsung");
    cout << s1.getCompany() << endl;
    s1.setColor("Red");
    s1.setModel("Galaxy3");
    s1.setRelease(2013);

    s1.printPhone();
    return 0;
}
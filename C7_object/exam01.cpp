//��ü���� ���α׷� �ǽ� - 1
// Ŭ���� : ��ü���� ���α׷��ֿ��� Ư�� ��ü ���� ���� �������, ����Լ� �����Ͽ� ����� ������ ��Ʋ, �ؾƲ, ���赵��� �Ѵ�. 
// Ŭ���� ���� ���Ǹ� �� �� ��, ��ü(�ν��Ͻ�)���� ����� ���
// ��, ���� Ŭ������ ���� �ν��Ͻ��� ���� �Ǹ�, ���������� ����������� ������ ���� ���� �� �ִ� �޸� ������ ������ ������, ��� �Լ��� ������ �̷������.

#include <iostream>
#include <string>
using namespace std;

class Circle {
    private :
    public :    // �ܺο��� ���� ����� ������ �� �ִ�.
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
    // ���ÿ��ٰ� Ŭ���� ������ �޸� �ø��� ���
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
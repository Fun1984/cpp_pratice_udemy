//��� �Լ� �ߺ� ���� - �ǽ�
//��� �Լ��� �Լ��� ����. ����, Ŭ���� �ȿ� �����ϴ� �� Ư¡�̴�.
// �ƿ﷯ ��� �Լ��� ����Ʈ ������ ����� �� �ִ�.

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
    obj.print(100); //�Ű������� int��
    obj.print(3.141592); //�Ű������� double��
    obj.print("Hello"); //�Ű������� string�̴�.
    obj.print();
    //�Ű������� Ÿ��, ����, ������ ���� ȣ��Ǵ� �Լ��� Ʋ����. 

    
    return 0;
}
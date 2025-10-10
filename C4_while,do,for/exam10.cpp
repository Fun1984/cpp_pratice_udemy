//더블루프에 대한 실습-2
//별표찍기

#include <iostream>

using namespace std;

int main(void) {

    for(int cnt = 1; cnt <= 5; cnt++) {
        for (int star = 0; star < cnt; star++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
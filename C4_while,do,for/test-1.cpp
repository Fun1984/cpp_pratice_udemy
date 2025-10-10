#include <iostream>

using namespace std;


int main(void) {
    /*
    for(int i=0; i<3; i++) {
        //첫번째 내부루프(공백 하나씩 줄여가며 출력)
        for(int j=0; j<2-i; j++) {
            cout << " ";
        }
        //두번째 내부루프(숫자를 찍는 부분)
        for(int k=1; k<(i+1)*2; k++) {
            cout << "*";
        }
        cout<<endl;
    }

    for(int i = 2; i>0; i--) {
        for (int j=0; j<3-i; j++) {
            cout << " ";
        }
        for (int k=1; k<i*2; k++) {
            cout << "*";
        }
        cout << endl;
    }*/
    for (int j = 0; j <3; j++) {
        for (int i=0; i<5; i++) {
            if ( i == 0+j || i == 4-j) {
                cout <<  "*";
            } else {
                cout << " ";
            }
        } 
        cout << endl;
    }
    for (int j = 1; j <3; j++) {
        for (int i=0; i<5; i++) {
            if ( i == 2+j || i == 2-j) {
                cout <<  "*";
            } else {
                cout << " ";
            }
        } 
        cout << endl;
    }
    return 0;
}
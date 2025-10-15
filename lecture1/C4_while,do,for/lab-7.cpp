
#include <iostream>

using namespace std;

/*
int main(void) {
    // lab-6의 역순
    int i=0, j=0, k=0;
    for(i=0; i<5; i++) {
        //첫번째 내부루프(공백 하나씩 줄여가며 출력)
        for(j=0; j<i; j++) {
            cout << " ";
        }
        //두번째 내부루프(숫자를 찍는 부분)
        for(k=1; k<10-(i*2); k++) {
            cout << k;
        }
        
        cout<<endl;
    }
    return 0; 
}*/

int main(void) {
    int i=0, j=0, k=0;

    for(i = 5; i>0; i--) {
        for (j=0; j<5-i; j++) {
            cout << " ";
        }
        for (k=1; k<i*2; k++) {
            cout << k;
        }
        cout << endl;
    }

    return 0;
}

//숙제1. 중첩루프를 사용하여 별표 피라미드를 크리스탈로 만드시오. 
//숙제2. 별표로 엑스자 만들기
//중첩 루프문을 이용하여, 숫자 삼각형 만들기


#include <iostream>

using namespace std;

/*
int main(void) {

    for (int i=1; i <= 10; i = i+2){
        for (int k = 4-(i/2); k > 0; k--){
            cout << " ";
        }
        for (int j = 1; j <= i; j++){
            cout << j ;
        }
        cout << endl;
        
    }
    return 0;
}
*/

int main(void) {
    int i=0, j=0, k=0;
    for(i=0; i<5; i++) {
        //첫번째 내부루프(공백 하나씩 줄여가며 출력)
        for(j=0; j<4-i; j++) {
            cout << " ";
        }
        //두번째 내부루프(숫자를 찍는 부분)
        for(k=1; k<(i+1)*2; k++) {
            cout << k;
        }
        cout<<endl;
    }
    return 0;
}
